#include<iostream>
using namespace std;
template <class T>
T myMax(T a,T b)
		{
		T max;
		if (a>b)
		return a;
		else 
		return b;
		}
template <class T>
class complex
{
	
	T real,img;
	public:
		complex()
		{
			real=0;
			img=0;
		}
		complex(T real1,T img1)
		{
			real=real1;
			img=img1;
		}
	friend ostream & operator << (ostream &out, const complex &c2) 
{ 
    out << c2.real; 
    out << "+i"<< c2.img << endl; 
    return out; 
} 
		complex operator + (complex c1)
        {
           complex temp;
           temp.real = real + c1.real;
           temp.img = img + c1.img;

           return temp;
        }
	friend bool operator >(complex c1,complex c2)	
	{
	if(c1.real>c2.real)							
	return true;
	else if(c1.real==c2.real)
	{
		if(c1.img>c2.img)
		return true;
	}	
	else 
		return false;
	}
		
};

int main()
{
	int c,d;
	cout<<"Enter two numbers: ";
	cin>>c>>d;
	//int c=9,d=10;
	cout<<myMax(c,d)<<endl;
	complex <int>a(10,2);
	complex <int>b(5,3);
	complex <int>c1;
	c1=myMax(a,b);
	cout<<c1;
	return 0;
	
}

