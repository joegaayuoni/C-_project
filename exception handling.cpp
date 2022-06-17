#include<iostream>
#include<string>

using namespace std;
class printer{
	string _name;
	int _availablepaper;
	
public:
	printer(string name, int paper){
		_name = name;
		_availablepaper = paper;
		
	}
	
	void Print(string txtDoc){
		//
		int requirepaper = txtDoc.length()/10;
		if(requirepaper>_availablepaper){
			throw 101;
			cout<<"Printing...."<<txtDoc<<endl;
			_availablepaper -=requirepaper;
		}
	}
};
int main(){
	printer myPrinter("Hp Deskjet", 10);
	try{
		myPrinter.Print("Hello, my name is Gaayuoni, I am a Software Engineer");
		myPrinter.Print("Hello, my name is Gaayuoni, I am a Software Engineer");
		myPrinter.Print("Hello, my name is Gaayuoni, I am a Software Engineer");
	}
	catch(const char* txtException ){
		 cout<<"Exception"<<txtException<<endl; 	
		
	}
	catch(int exCode)
	{
		cout<<"Exception : "<<exCode<<endl;
	}
	
	return 0;
	
}
