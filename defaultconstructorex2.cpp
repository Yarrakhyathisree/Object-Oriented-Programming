//swap of two numbers using default construstor 
#include<iostream>
using namespace std;
class swap1
{
	private:
		int a,b;
	public:
		swap1()
		{
			cout<<"Enter the values to be swapped:\n";
			cin>>a>>b;
			cout<<"After swapping:\n";
			b=a+b;
			a=b-a;
			b=b-a;
		}
		void display();
};
void swap1::display()
{
	cout<<a<<b;
}
int main()
{
	swap1 s;
	s.display();
	return 0;
}
