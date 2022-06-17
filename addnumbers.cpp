#include<iostream>
#include<string>

using namespace std;

int add_number(int* A, int* B)
{
	return (*A + *B);
}
int main ()
{
	int a = 5;
	int b = 8;
	cout<<add_number(&a, &b)<<endl;
	

	return 0;
	
	
	
}
