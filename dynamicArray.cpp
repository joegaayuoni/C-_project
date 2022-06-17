#include<iostream>
#include<string>

using namespace std;

int main ()
{
	int size;
	
	cout<<"size : ";
	cin>>size;
	
	//this below codes would not run since it is not the right way to declare dynamic arrays
//	int myArray = [size];

// this is the right code to use 
	int* myArray = new int[size];
	
	for (int i=0; i<size; i++)
	{
		cout<<"Array["<<i<<"] ";
		cin>>myArray[i];
		
	}
	 
	for (int i=0; i<size; i++){
	//below is one way to print the arrays 
	//	cout<<myArray[i]<<" ";
		cout<<*(myArray + i)<<" ";
	}
	
	delete []myArray;
	myArray = NULL;
	
}
