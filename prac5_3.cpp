#include <iostream>
using namespace std;
int main() 
{ 

	int n=0;
	char temp;
    string str,str1;
	cout<<"Enter a String to Copy and Reverse: ";
    cin>>str;
    cout<<endl;
	while (str[n]){
        n++;
    } 
    
    //Copy
    str1+=str;
	cout<<"Copied String is: "<<str1<<endl;
	
    //Reverse 
	for (int i = 0; i < n / 2; i++){	
    	temp=str[i];
    	str[i]=str[n-i-1];
    	str[n-i-1]=temp;
	}
    cout <<"Reverse String is: "<< str; 
    return 0; 
} 
