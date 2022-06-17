#include<iostream>
#include<string>
#include<map>

using namespace std;

int main ()
{
	map<string,string> Somemap;
	
	Somemap.insert(pair<string, string>("1","what is your name?"));
	Somemap.insert(pair<string, string>("2","How old are you?"));
	Somemap.insert(pair<string, string>("3","what do you do for living?"));
	
	cout<<Somemap["1"]<<endl;
	cout<<Somemap["2"]<<endl;
	cout<<Somemap["3"]<<endl;
	cout<<Somemap.size()<<endl;
	
	return 0;
}
