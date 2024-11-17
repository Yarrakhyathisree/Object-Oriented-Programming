//default constructor
//dont use any return type 
#include<iostream>
using namespace std;
class item
{
	private:
		int a,b;
	public:
	item()
	{
		a=10;
		b=20;
	}	
	void putdata();
};
void item::putdata()
{
	cout<<a<<b;
}
int main()
{
	item x;
	x.putdata();
	return 0;
}
