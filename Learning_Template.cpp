#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

template<typename T> myMax(T a, T b){
	return (a > b) ? a: b;
}

int main(){

	int maxInt = myMax<int>(100, 200);
	double maxFloat = myMax<double>(1.25, 3.69);
	char maxChar = myMax<char>('a', 'l');
	
	cout<< "Max int = " << maxInt << endl;
	cout<< "Max float = " << maxFloat << endl;
	cout<< "Max char = " << maxChar << endl;
	
	return 0;
}

