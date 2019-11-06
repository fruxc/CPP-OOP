#include <iostream>

using namespace std;
 

void occChar(string str,int n)
{
  
 int freq[26];
    for(int i=0;i<20;i++)
    {
    freq[i]=0;
	}
	int count;
    for (int i = 0; i < n; i++)
        freq[str[i] - 97]++;
 	for (int i = 0; i < n; i++) 
	 {
 	  if (freq[str[i] - 97] != 0) 
	   {
									 	
            cout << str[i] << freq[str[i] - 97] << " ";
  
	       freq[str[i] - 97] = 0;
        }
    }
    

}

 

int main()
{
    	int length=0;
	
	char name[20];
	cout<<"Enter Name: ";
	cin>>name;
	

	while ( name[length])
	 {
        length++;
    }
    occChar(name,length);
    return 0;
}
