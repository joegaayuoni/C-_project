#include<iostream>
#include<string>
#include<map>

using namespace std;

int main (){
	
	map<string, string> myDictionary;
	
	myDictionary.insert(pair<string, string>("apple","der Apfel"));
	myDictionary.insert(pair<string, string>("banana","die banane"));
	myDictionary.insert(pair<string, string>("orange"," die orange"));
	
/*	for(auto  pair:myDictionary)
	{
		cout<<pair.first<<" - "<<pair.second<<endl;
	}
	
	return 0;
}
*/

cout<< myDictionary.size() <<endl;

myDictionary["apple"] = "die banane";

for (auto pair : myDictionary)
{
	cout<<myDictionary.first <<myDictionary.second<<endl;
}
};
