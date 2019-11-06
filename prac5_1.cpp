#include<iostream>
using namespace std;
int main()
{	int length=0,counter=0;
	
	char name[20];
	cout<<"Enter Name: ";
	cin>>name;
	

	while ( name[length])
	{
        length++;
    }
    cout<<"Length of String is: "<<length<<endl;
    
	for (int i=0;i<length;i++)
	{
		if(name[i]==name[(length-1)-i])
		counter++;
	}
	if(counter==length)
	cout<<"Palindrome";
	else
	cout<<"Not a Palindrome";	
	
	return 0;
}

