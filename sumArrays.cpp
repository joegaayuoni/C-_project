#include<iostream>
#include<string>

using namespace std;

int main ()
{
	int size;
	int *myArray = new int[size];
	cout<<"size :";
	cin>>size;
	
	for(int i=0; i<size; i++)
{
	cout<<"An array of size ";
	cin>>myArray[i];
	cout<<myArray[i]<<endl;
}

for (int i=0; i<size; i++)
{
	int num;
	//myArray[i] = &num;
	int sum=0;
	for(int i=0; i<size; i++)
	{sum +=myArray[i];
	}
	
	cout<<"sum : "	<<sum<<endl;
	
	return 0;
}
};
