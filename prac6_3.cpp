#include<iostream>
using namespace std;

class c_polygon
{	
	public:
	
	virtual void area() 
	{ 
	cout<<"In c_polygon";
	} 
}; 
class c_rectangle: public c_polygon
{
	float l,b;
	public:
	
		void area()
		{	
		cout<<"Enter Length Of Rectangle : ";
		cin>>l;
		cout<<"Enter Breadth Of rectangle : ";
		cin>>b;
		cout<<"Area Of Rectangle : "<<(l*b)<<" sq units."<<endl;
		}
};

class c_triangle: public c_polygon
{
	float b,h;
	public:

	
		void area()
		{
		cout<<"Enter Breadth Of Triangle : ";
		cin>>b;	
		cout<<"Enter Height Of Triangle : ";
		cin>>h;	
		cout<<"Area Of Triangle : "<<(0.5*b*h) <<"sq units.";
		}
};

int main()
{
	c_polygon *ptr;
	c_rectangle r;
	ptr=&r;
	ptr->area();
	c_triangle t;
	ptr=&t;
	ptr->area();
	
	return 0;
}
