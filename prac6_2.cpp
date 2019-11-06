#include<iostream>
using namespace std;

class Complex { 
private: 
    int real, imag; 
public: 
	Complex()
	{
		real=0;
		imag=0;
	}
    Complex(int r, int i)
	{
	real = r;   
	imag = i;
	} 
      
     
    Complex operator + (Complex const &obj) { 
         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 
         return res; 
    } 
    void getData()
    {
    	cout << "\nEnter real and imaginary part of complex number:"<<endl;
    	cin>>real>>imag;
	}
    void showData() 
	{ 
	cout << real << "+" << imag<<"i" << endl;
	} 
}; 
  
int main() 
{ 
    Complex c1, c2;
	c1.getData();
	cout<<"\nEntered Complex Number is: ";
	c1.showData();
	c2.getData();
	cout<<"\nEntered Complex Number is: ";
	c2.showData(); 
    Complex c3 = c1 + c2; 
    cout<<"\nAddition is: ";
    c3.showData(); 
} 
