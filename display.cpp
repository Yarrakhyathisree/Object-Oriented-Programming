//display message
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void display(const char *msg)
{ 
	cout<<msg;
}
int main()
{
	char a [20];
	strcpy(a,"khyathisree");
	display(a);
	cout<<endl<<a;
	return 0;
}
