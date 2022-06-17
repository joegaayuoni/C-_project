#include<iostream>
#include<string>


using namespace std;

class contactDetails{
public:	
	string Name;
	int Age;
	string Course;


void enter_credentials()

{	
	
	
	
	

}

void CheckAge()
{

	cout<<"Validating your credentials : "<<endl;
	
	cout<<"Enter your age : ";
	cin>>Age;
	cout<<"\n";
	
	if(Age>18)
	{
	cout<<"Enter your name : ";
	getline(cin,Name );
	cout<<endl; 
	
	cout<<"Enter your course : ";
	getline(cin,Course );
	}
	else
	{
		cout<<"You are not qualified for the registration"<<endl;
	}
		
}

 

void print_credentials()
{
	
cout<<"Age : "<<Age<<endl;
cout<<"Name : "<<Name<<endl;	
cout<<"course : "<<Course<<endl;
	
}

};
int main ()
{
	contactDetails C1 ;
	
	C1.CheckAge();
	C1.enter_credentials();
	C1.print_credentials();
	
	return 0;
}
