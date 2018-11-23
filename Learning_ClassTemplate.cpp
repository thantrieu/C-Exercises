/**
 * Class Templates Like function templates, class templates are useful 
 * when a class defines something that is independent of data type. 
 * Can be useful for classes like LinkedList, BinaryTre, Stack, Queue, Array, etc.
 */

#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

template<class T>
class Array{
	private:
		T *arr;
		int size;
	public:
		Array(T a[], int n);
		void show();
};

template<class T>
Array<T>::Array(T *a, int n){
	arr= new T[n];
	size = n;
	
	for(int i = 0; i< size; i++){
		arr[i] = a[i];
	}
}

template<class T>
void Array<T>::show(){
	for(int i = 0; i< size; i++){
		cout<< *(arr+i) << " ";
	}
	cout<< endl;
}

int main(){
	int a[] = {1, 2, 5, 9, 6, 6, 4, 7, 2, 3, 1, 0, 7};
	int n = sizeof(a)/sizeof(int);
	
	Array<int> myArr(a, n);
	myArr.show();
	
	return 0;
}

