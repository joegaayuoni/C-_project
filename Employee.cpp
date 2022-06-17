#include<iostream>
#include<fstream>
#include<string>


using namespace std;


class AbstractClass{
	virtual void askForPromotion()=0;
};
//practising encapsulation 

class Employee:AbstractClass{

private:
	string Company;

protected:
		string Name;
	
// functions inside the class
public:
	int  Age;
	//creating getters and setters	
	void setName(string name){
		Name= name;
	}	
	string getName()
	{
		return Name;
	}
	
	void SetCompany(string company ){
			Company = company;
	}
	string getCompany(){
		return Company;
	}
	
	void setAge(int age){
		if(age>=18)
		Age = age;
	}
	int getAge()
	{
		return Age;
	}
	void IntroduceYourself(){
		cout<<"Name -"<<Name<<endl;
		cout<<"Company -"<<Company<<endl;
		cout<<"Age -"<<Age<<endl;
	}
//constructor in the class
	Employee(string name, string company, int age)
	{
		Name = name;
		Company = company;
		Age = age;	
	}
	
	void askForPromotion(){
		if (Age>18){
			cout<<Name<<" , got promoted "<<endl;
		}
		else
		{
			cout<<Name<<" Sorry no promotion for you. "<<endl;
		}
		
	}
	
	virtual void Work()
	{
		cout<<Name<< " is checking email, task backlog, performing tasks..." <<endl;
	}

};

class Developer:public Employee {
public:
	string FavProgrammingLanguage;
	
	
	
	Developer (string name, string company, int age, string favProgrammingLanguage)
	:Employee( name,  company,  age)
	{
		FavProgrammingLanguage= favProgrammingLanguage; 	
	}
	
	void FixBug(){
		cout<<Name <<" Fix bug using "<<FavProgrammingLanguage<<endl;
	}
	
	void Work()
	{ 
	  cout<<Name <<" is writing " <<FavProgrammingLanguage<<endl;
	}
	
};

class Teacher : public Employee
{
public:
	string Subject;
	
	void PrepareLesson(){
			cout<<Name<<" is preparing " <<Subject << " lesson " <<endl;
	}
	
	Teacher(string name, string company, int age,string subject)
	:Employee(name, company, age)
	
	{ 
	
		Subject = subject;
		
	}
	
	void Work()
	{
		cout<<Name <<" is teaching "<<Subject<<endl;
	}
};
 	
int main ()
{
	//Employee employee1 = Employee("Saldina","YT-CodeBeauty",25);
	//Employee employee2 = Employee("Adams","Twellium",12);
	//employee1.Name= "";
//	employee1.Company=;
	//employee1.Age =25;
	
//	employee1.IntroduceYourself();
	
//	employee2.IntroduceYourself();
	
	//employee1.setAge(15);
	
	//cout<<employee1.getName() << " is " <<employee1.getAge()<<" years old "<<endl;
	
	//employee1.askForPromotion();
	//employee2.askForPromotion();
	
	Developer d1 = Developer("Saldina","YT-CodeBeauty",25, "C++");
	Teacher t1 = Teacher("Jack","Cool Schools",35, "History");
	d1.askForPromotion();
	d1.FixBug();
	t1.PrepareLesson();
	t1.askForPromotion();
	//d1.Work();
	//t1.Work();
	
	Employee* e1 = &d1;
	Employee* e2 = &t1;
	
	e1->Work();
	e2->Work();
}
