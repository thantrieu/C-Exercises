#include<iostream>
#include<iomanip>
#include<fstream>
#include<limits>
using namespace std;

void getUserInput(int arr[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
}

void showInfo(int arr[], int n){
	for(int i = 0; i< n; i++){
		cout<< arr[i] << " ";
	}
	cout<< endl;
}

void showResult(int arr[], int max, int secondMax, int n){
	cout<<"Gia tri max = " << max << endl;
	cout<< "Chi so: ";
	for(int i = 0; i< n; i++){
		if(arr[i] == max){
			cout<< i << " ";
		}
	}
	
	cout<< "\nGia tri lon thu hai = " << secondMax << endl;
	cout<< "Chi so: ";
	for(int i = 0; i< n; i++){
		if(arr[i] == secondMax){
			cout<< i << " ";
		}
	}
}

void findMax(int arr[], int n){
	int max = arr[0];
	int secondMax = numeric_limits<int>::min();
	int count = 0;
	
	for(int i = 0; i< n; i++){
		if(max == arr[i]){
			count++;
		}
	}
	if(count == n){
		cout<< "Khong ton tai so lon nhat va lon thu hai trong mang!" << endl;
	}else{
		// tim max:
		for(int i = 1; i< n; i++){
		    if(max < arr[i]){
				max = arr[i];
			}
		}
		// tim secondMax:
		
		for(int i = 0; i< n; i++){
			if(arr[i] != max && arr[i] > secondMax){
				secondMax = arr[i];
			}
		}
		// show ket qua:
		showResult(arr, max, secondMax, n);
	}
}


int main(){
	
	int arr[100];
	int n;
	
	getUserInput(arr, n);
	showInfo(arr, n);
	findMax(arr, n);
	
	return 0;
}

