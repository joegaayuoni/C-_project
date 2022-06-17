#include<iostream>
#include<string>
#include<map>


using namespace std;

int main()
{
	map<string, list<string>> pokedex;
	
	list<string> pikachuAttack {"thunder Attack","tail Whip","quick attack"};
	list<string> charmanderAttack {"flame thrower","scary attack"};
	list<string> chikoriAttack {"razor leaf","poison powder"};
	
	pokedex.insert(pair<string, list<string>>("pikachu",pikachuAttack));
	pokedex.insert(pair<string, list<string>>("charmander",charmanderAttack));
	pokedex.insert(pair<string> list<string>>("chikori",chikoriAttack));
	
	for (auto pair:pokedex)
	{
		cout<<pair.first<<" - ";
		
		for (auto attack: pair.second)
		{
			cout<<attack<<endl;
		}
	}
}
