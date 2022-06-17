#include<iostream>
#include<string>
#include<vector>

using namespace std;

void print_vector(vector<int> * vi){
	for (int i=0; i< vi->size(); i++)
	{
		cout<<"Element at : "<<i<<" is "<<vi->at(i)<<endl;
	}
}

int main ()
{
		vector<int> numbers(3);
		
		numbers[0]=1000;
		numbers[1] = 2000;
		numbers[2]= 3000;
		
		cout<<numbers[0]<<endl;
		
		numbers.push_back(4000);
		cout<<"vector size : "<<numbers.size()<<endl;
		
		print_vector(&numbers);
		
		
		return 0 ;
		
	
}
