#include<iostream>
#include<string>

using namespace std;

struct Student{
	string name;
	int gpa;
	
};

int main ()
{
	struct Student S1;
	
	S1.name = "Gaayuoni ";
	S1.gpa =3.4;
	
	cout<<S1.name<<endl;
	cout<<S1.gpa<<endl;
	
	return 0;
	
}
