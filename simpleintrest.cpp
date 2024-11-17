//simple intrest program
//INPUT:principal ammount,time,rate,simpleintrest
#include<iostream>
using namespace std;
int main()
{
	int pri,time,rate,simpleint;
	float total;
	cout<<"Enter the principal amount:"<<endl;
	cin>>pri;
	cout<<"Enter the time in years:"<<endl;
	cin>>time;
	cout<<"Enter the rate of intrest:"<<endl;
	cin>>rate;
	simpleint=(pri*time*rate)/100;
	cout<<"Simple intrest="<<simpleint<<endl;
	
    //total= amount given(pri) + simpleintrest(simpleint)
	total=pri+simpleint;
	cout<<"Total amount="<<total<<endl;  
	
	return 0;
} 

