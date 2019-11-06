#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the Matrix of m*m form :";
	cin>>n;             
	cout<<"Enter the elements for "<<n<<"*"<<n<<" matrix:"<<endl;                  
	int A[n][n];
	int temp=n,k=1,p=0,i;            
									
	while(k<=n*n)                      
	{
		//First Row 
		for(i=p;i<temp;i++)         
		{
			A[p][i]=k;
			k++;
		}
		//Last Column
		for(i=p+1;i<temp;i++)      
		{
			A[i][temp-1]=k;
			k++;
		}
		//Last Row 
		for(i=temp-2;i>=p;i--)     
		{
			A[temp-1][i]=k;
			k++;
		}
		//First Column 
		for(i=temp-2;i>p;i--)      
		{
			A[i][p]=k;
			k++;
		}
		p++;
		temp=temp-1;
		
	}
	
	cout<<"Matrix is: "<<endl;
	for(i=0;i<n;i++)             
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
