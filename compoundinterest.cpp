//compound intrest program
//INPUT:compound ammount,time,rate,coumpond intrest
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int pri,time,rate,ci;
	float total;
	cout<<"Enter the principal amount:"<<endl;
	cin>>pri;
	cout<<"Enter the time in years:"<<endl;
	cin>>time;
	cout<<"Enter the rate of intrest:"<<endl;
	cin>>rate;
    // Calculate compound interest
    double A = pri * ((pow((1 + rate / 100), time)));
    double CI = A - pri;
    cout << "Compound interest is " << CI;
	return 0;
} 

