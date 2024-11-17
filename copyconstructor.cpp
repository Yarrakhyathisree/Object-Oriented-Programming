//copy constructor
#include<iostream>
using namespace std;
class sample
{
	private:
		int n;
	public:
	    sample()	//default
	    {
	    	n=0;
		}
		sample(int a)
		{
			n=a;
		}
		sample(sample &x)
		{
			n=x.n;
		}
		void display()
		{
			cout<<n;
		}		
};
int main()
{
	sample a(100);//a(100)or a=100
	sample b(a);
	sample c=a;
	sample d;
	d=a;
	a.display();
	cout<<endl;
	b.display(); 
	cout<<endl;
	c.display();
	cout<<endl;
	d.display();
	return 0;
}
