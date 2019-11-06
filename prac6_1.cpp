#include<iostream>
using namespace std;

class calc
{
	public:
		
	//Cylinder
	float volume(float r, float h)
	{
		return(3.14*r*r*h);
	}
	//Cube
	float volume(float e)
	{
		return (e*e*e);
	}
	//Rectangle
	float volume(float l,float h,float w)
	{
		return(l*h*w);
	}
};
int main()
{
	calc c;
	int op;
	cout<<"Press 1 for Volume of Cylinder\nPress 2 for Volume of Cube\nPress 3 for Volume of Rectangle\nEnter Your Choice:";
	cin>>op;
	switch(op)
	{
	case 1:
	float cr,ch;
	cout<<"Enter Radius and Height of Cylinder: "<<endl;
	cin>>cr>>ch;
	cout<<"Volume Of Cylinder is: "<<c.volume(cr,ch);
	break;
	case 2:
	float e;
	cout<<"Enter Edge of Cube: "<<endl;
	cin>>e;
	cout<<"Volume Of Cube is: "<<c.volume(e);
	break;
	case 3:
	float rl,rh,rw;
	cout<<"Enter Length, Height & Width of Rectangle: ";
	cin>>rl>>rh>>rw;
	cout<<"Volume Of Rectangle is: "<<c.volume(rl,rh,rw);
	break;
	default:
	cout<<"\n Please Enter Valid Option!";
	}
	return 0;
}
