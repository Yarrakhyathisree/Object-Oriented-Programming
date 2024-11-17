//parameterized constructor 
#include<iostream>
#include <cstring>
using namespace std;

class student
{
	private:
		int rollno;
		char name[50];
		double fees;
	public:
	    student(int,char[],double);
		void display();	
};
student::student(int rnum,char n1[],double f1)
{
	rollno=rnum;
	strcpy(name,n1);
	fees=f1;
}
void student::display()
{
	cout << endl << rollno << "\t" << name << "\t" << fees;
}
int main()
{
    student s(7, "khyathisree", 100000);
    s.display();
    return 0;
}
