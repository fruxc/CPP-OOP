#include<iostream>
using namespace std;

class strFun
{
		string str;
	public:
		strFun(){
			str="";
		}
		
		strFun(string str1){
			str=str1;
		}
	
		strFun(const char *str1)
		{
			str=str1;
		}
	int strLen(){
		int length;
		while (str[length])
		length++;
		return length;
	}
	
	void display(){
		cout<<"\nThe String is: "<<str<<endl;
	}
	
	void compare(string s1,string s2){
		if((s1.compare(s2))<0)
		cout<<s1 <<" is smaller than "<<s1<<endl;
		else if((s1.compare(s2))>0)
		cout<<s1 <<" is greater than "<<s1<<endl;
		else
		cout<<s1 <<" is equal to "<<s1<<endl;
	}
	
	string copy(string s1,string s2){
		s1=s2;
		return s1;
	}	
};
int main(){	
	string abc;
	strFun s("hello");
	cout<<"Length of String is: "<<s.strLen();
	
	strFun s1=s;
	s1.display();
	s1.compare("helllo","hellllo");
	cout<<s1.copy(abc,"hello");
	return 0;
}
