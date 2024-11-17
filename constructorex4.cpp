#include<iostream>
using namespace std;

class customer
{
    	string first_name;
    	string last_name;
    public:
	    customer(string fn,string ln)
		{
			first_name=fn;
			last_name=ln;
		}	
		void display()
		{
			cout<<first_name<<"\t"<<last_name;
		}
};
class account
{
	customer c;
	double balance;
	public:
		account(customer c1,double b)
		{
			customer=c1;
			balance=b;
		}
		void display()
		{
			cout<<customer<<balance;
		}
};
int main()
{
	customer c("khyathisree","yarra");
	account a1(c,200000000000);
	account a2(c,20000562837889);
	a1.display();
	a2.display();
	return 0;
}
