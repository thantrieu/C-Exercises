#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

template <class T>
    void bubbleSort(T a[], int n){
    	for(int i = 0; i< n-1; i++){
    		for(int j = n-1; j> i; j--){
    			if(a[j] < a[j-1]){
    				swap(a[j], a[j-1]);
				}
			}
		}
	}
	
template <class X>
	void swap(X &a, X &b){
		X x = a;
		a = b; 
		b = x;
	}
	
template<class C>
    void showInfo(C c[], int n){
    	for(int i = 0; i< n; i++){
    		cout<< c[i] << " ";
		}
		cout<< "\n";
	}

int main(){
	int a[] = {1, 2, 5, 9, 6, 6, 4, 7, 2, 3, 1, 0, 7};
	int n = sizeof(a)/sizeof(int);
	char chars[] = {'a', 'e', 'b', 'l', 'r', 's', 'e', 'z', 'n', 'd'};
	
	int sizeOfCharArray = sizeof(chars)/sizeof(char);
	bubbleSort(a, n);
	showInfo(a, n);
	
	bubbleSort(chars, sizeOfCharArray);
	showInfo(chars, sizeOfCharArray);
	
	return 0;
}

