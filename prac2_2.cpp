#include<iostream>
using namespace std;
int main(){
	int i,fact=1,number;
	cout<<"enter the number";
	cin>>number;
	for(i=1;i<=number;i++)
	fact=fact*i;
	cout<<"factorial of "<<number<<"is"<<fact;
	return 0;
	
}
int factorial(int n){
	if(n<0)
	return(-1); 
	if(n=0)
	return(1);       // terminating condition
	else
	{
		return(n*factorial(n-1));
	}
}
