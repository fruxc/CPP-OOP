#include<iostream.h>
#include<conio.h>
class Complex
{
public:
int real,img;
Complex()
{
real=0;
img=0;
}
Complex(int real1,int img1)
{
real=real1;
img=img1;

}
Complex(Complex& c)
{
real=c.real;
img=c.img;
}
setValue()
{
cout<<"Enter Value of Real Number";
cin>>real;
cout<<"Enter Value of Img Number";
cin>>img;
cout<<"Enter Eqn is: " <<real<<"+i"<<img;
cout<<endl;
}

Complex add(const Complex& c)
{
Complex c1;
c1.real=this->real+c.real;
c1.img=this->img+c.img;
return c1;
}


Complex sub(const Complex& c)
{
Complex c1;
c1.real=this->real-c.real;
c1.img=this->img-c.img;
return c1;
}

};
void main()
{
clrscr();
Complex c1,c2,c3,c4;
c1.setValue();
c2.setValue();
c3=c1.add(c2);
cout<<"Addition is: "<<c3.real<<"+i"<<c3.img<<endl;
c4=c1.sub(c2);
cout<<"Subtraction is: "<<c4.real<<"+i"<<c4.img;

getch();
}