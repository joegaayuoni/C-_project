#include<string>

#include<string>
#include<iostream>

using namespace std;

template<typename T>

void swap(T& a, T& b){
	T temp = a;
	a = b;
	b = temp;
}

int main ()
{ 
	int a= 5, b=7;
	
	cout<<a<<" - "<<b<<endl;
	swap(a, b);
	cout<<a<<" - "<<b<<endl;
	
	char c = 'c', d = 'd';
	cout<<c <<" - " <<d<<endl;
	swap(c, d);
	cout<<c<<" - "<<d<<endl;
	
}
