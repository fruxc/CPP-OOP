#include <iostream>
using namespace std;

int main()
{
	int r1,r2,c1,c2;
	cout<<"Enter the number of rows and columns of 1st Matrix : ";
		cin>>r1>>c1;
	cout<<"Enter the number of rows and columns of 2nd Matrix : ";
		cin>>r2>>c2; 
		
	int a[r1][c1],b[r2][c2];
	
	if(c1==r2)
	{
		int c[r1][c2];
		
		cout<<"Enter values of first Matrix followed by space: ";
		
		for(int i=0;i<r1;i++) {
			for(int j=0;j<c1;j++)
				cin>>a[i][j];
		}
		
		cout<<"Enter values of second Matrix followed by space:";
		
		for(int i=0;i<r2;i++) {
			for(int j=0;j<c2;j++)
				cin>>b[i][j];
		}
		
		for(int i = 0; i < r1; i++)
        	for(int j = 0; j < c2; j++) {
            	c[i][j]=0;
        }
		
		for(int i=0;i<r1;i++)
			for(int j=0;j<c2;j++)
				for(int k=0;k<c1;k++)
					c[i][j]+=a[i][k]*b[k][j];
	
		cout<<"Multiplication of both the Matrix is: "<<endl;	
		for(int i=0;i<r1;i++) {
			for(int j=0;j<c2;j++)
				cout<<c[i][j]<<" ";
		cout<<endl;
		}
	}
	else
	cout<<"Cannot Multiply both the Matrix!!! ";
	return 0;
	
}
