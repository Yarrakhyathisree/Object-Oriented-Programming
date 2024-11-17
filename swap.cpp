//swapping of 2 numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<endl<<"Enter the value of b:"<<endl;
	cin>>b;
	cout<<"Before swapping\n"<<a<<endl<<b<<endl;
	b=a+b;
	a=b-a;
	b=b-a;
	cout<<"After swapping\n"<<a<<endl<<b<<endl;
	return 0;
}
