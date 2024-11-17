//create a class that captures students
#include<iostream>
using namespace std;

class student
{
	private:
		string first_name;
		string last_name;
		string class_year;
		string major;
	public:
	student(string fn,string ln,string cy,string maj)
	{
		first_name=fn;
		last_name=ln;
		class_year=cy;
		major=maj;
	}	
	void display()
	{
	cout<<"student"<<"\t"<<first_name<<"\t"<<last_name<<"\t"<<class_year<<"\t"<<major;
	cout<<endl;
	}
};
int main()
{
	student s1("khyathisree","yarra","senior","major");
	student s2("prasanthi","yarra","senior","major");
	s1.display();
	s2.display();
	return 0;
}
