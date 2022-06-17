#include<iostream>
#include<string>


using namespace std;

class Printer{
	string _name;
	int _availablePaper;
	
public:
	Printer(string name, int paper)
	{
		_name= name;
		_availablePaper = paper;
		
	}
	
	void Print(string txtDoc){
		
		int requiredPaper = txtDoc.length()/10;
		
		if(requiredPaper > _availablePaper){
			throw 101; 
		}
		cout<<"Printing...."<<txtDoc <<endl;
		_availablePaper -=requiredPaper;
		
		
	}
	
	
};

int main (){
	
	try{
	
	Printer myPrinter("HP DeskJet 1234", 10);
	myPrinter.Print("Hello, my name is saldina. I am a software Engineer.");
	myPrinter.Print("Hello, my name is saldina. I am a software Engineer.");
	myPrinter.Print("Hello, my name is saldina. I am a software Engineer.");
}

catch(const char* txtException){
	cout<<"Exception"<<txtException<<endl;
}
//catch(int exCode){
//	cout<<"Exception"<<exCode<<endl;
//}
catch(...){
	cout<<"Exception happened"<<endl;
}

	
	return 0;
	
}
