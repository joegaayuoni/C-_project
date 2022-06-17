#include<iostream>
#include<string>

using namespace std;

void enter_credentials(){
	
	
}

void print_credentials(string* name, string* course, int* age)
{
	*name =&Name;
	*course=&Course;
	*age = &Age;
	
	
	
	
	cout<<"Name : "<<name<<endl;
	cout<<"Course : "<<course<<endl;
	cout<<"Age  : " <<age<<endl;
}

int main ()
{
	string Name;
	string Course;
	int Age;
	
	cout<<"Enter your name : ";
	getline(cin, Name);
	cout<<endl;
	
	cout<<"Enter your course : ";
	getline(cin, Course);
	cout<<endl;
	
	cout<<"Enter your age : ";
	cin>>Age;

	print_credentials();
	
	return 0;
}

