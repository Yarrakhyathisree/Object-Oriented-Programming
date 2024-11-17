#include <iostream>
using namespace std;
class Rectangle 
{
  private:
    int length;  
    int breadth; 

  public: 
    Rectangle(int l, int b) 
	{
        length = l;
        breadth = b;
    }
    int area() 
	{
        return length * breadth;
    }
 
    void display() 
	{
        cout<<"Length: "<<length<< ", Breadth:" <<breadth<<endl;
    }
};

int main()
 {  
    Rectangle rect(40,90);
    rect.display();
    cout << "Area: " << rect.area() << endl;


    return 0;
}
