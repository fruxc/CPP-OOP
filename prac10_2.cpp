#include <iostream>
using namespace std;
template<class T>
void mySwap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}
int main()
{
	int a, b;
	cout<<"Enter two integer values: ";
	cin>>a>>b;
	mySwap(a, b);
	cout<<"After swap a = "<<a<<", b = "<<b<<endl;
	double p, q;
	cout<<"Enter two double values: ";
	cin>>p>>q;
	mySwap(p, q);
	cout<<"After swap p = "<<p<<", q = "<<q;
	return 0;
}

