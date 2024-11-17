#include<iostream>
using namespace std;
class planet 
{
	private:
		string name;
		double distance;
		double gravity;
	public:
	    planet(string name1,double d,double g)
		{
			name=name1;
			distance=d;
			gravity=g;
		}	
		void display()
		{
			cout<<name<<"\t"<<distance<<"\t"<<gravity;
			cout<<endl;
		}
};
int main()
{
	planet earth("earth",10000000.0,91.7);
	planet mars("mars",2000000000.0,95.7);
	earth.display();
	mars.display();
	return 0;
}
