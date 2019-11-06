#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class marksheet
{
		int oop,se,dm,baf,ppm,eng,total,rno;
		float avg;
		char name[20],result[10],grade[10];
		
	public:
		void get_studData();
		void calculate_Data();
		void display_Data();
		void skeleton();
};

void marksheet :: get_studData(){

	cout<<"Enter your Roll number"<<"\n";
		cin>>rno;
	
	cout<<"Enter your Name"<<"\n";
		cin>>name;
	
	cout<<"Enter OOP mark"<<"\n";
		cin>>oop;
		
	cout<<"Enter SE marks"<<"\n";
		cin>>se;
		
	cout<<"Enter DM mark"<<"\n";
		cin>>dm;
	
	cout<<"Enter BAF mark"<<"\n";
		cin>>baf;
	
	cout<<"Enter PPM mark"<<"\n";
		cin>>ppm;

}

void marksheet :: calculate_Data(){

	total = oop + baf + dm;
	avg = total/3;
	
	if(oop >= 45 && baf >= 45 && dm >= 45)
		strcpy(result,"Pass");
	else
		strcpy(result,"Fail");
		
	if(strcmp(result,"Pass")==0)
	{
		if(avg >= 90)
			strcpy(grade,"O grade");
		else if(avg < 90 && avg >= 80)
			strcpy(grade,"A grade");
		else if(avg < 80 && avg >= 70)
			strcpy(grade,"B grade");
		else if(avg < 70 && avg >= 60)
			strcpy(grade,"C grade");
		else if(avg < 60 && avg >= 50)
			strcpy(grade,"D grade");
		else
			strcpy(grade,"E grade");	
	}
	else
		strcpy(grade,"F grade");

}

void marksheet :: display_Data(){

	cout<<"\nRegister Number: "<<rno<<"\n";	
	cout<<"Name: "<<name<<"\n";	
	cout<<"OOP: "<<oop<<"\n";
	cout<<"SE: "<<se<<"\n"; 
	cout<<"DM: "<<dm<<"\n";		
	cout<<"BAF: "<<baf<<"\n";	
	cout<<"PPM: "<<ppm<<"\n";	
	cout<<"Total: "<<total<<"\n";
	cout<<"Average: "<<avg<<"\n";
	cout<<"Result: "<<total<<"\n";
	cout<<"Grade: "<<grade;

}

void marksheet :: skeleton()
{
	int width = 45;
	char c = 201, d = 187, e = 205, f=186;
		cout<<c;
	
	for(int i=0;i<53;i++)
	{
		cout<<e;
	}
	cout<<d<<endl;

	cout<<f<<"\tSardar Patel Institute Of Technology   \t"<<"      "<<f<<"\n";
	
	c=204;
	d=185;
		cout<<c;
	
	for(int i=0;i<53;i++)
	{
		cout<<e;
	}
	cout<<d<<endl;
	
	cout<<f<<"Roll No :" <<rno<<"\t\t\t\t\t      "<<f<<endl;
	cout<<f<<"Name : "<<name<<"\t\t\t\t\t      "<<f<<endl;
	cout<<c;
	
	for(int i=0;i<53;i++)
	{
		cout<<e;
	}
	cout<<d<<endl;

	cout<<f<<"Subject             Max      Min            Obt.Marks"<<f<<"\n";
	cout<<c;
	
	for(int i=0;i<53;i++)
	{
		cout<<e;
	}
	cout<<d<<endl;
	
	cout<<f<<"OOP                 100      45              "<<oop<<"      "<<f<<endl;
	cout<<f<<"SE                  100      45              "<<se<<"      "<<f<<endl;
	cout<<f<<"DM                  100      45              "<<dm<<"      "<<f<<endl;
	cout<<f<<"BAF                 100      45              "<<baf<<"      "<<f<<endl;
	cout<<f<<"PPM                 100      45              "<<ppm<<"      "<<f<<endl;
	cout<<c;
	
	for(int i=0;i<53;i++)
	{
		cout<<e;
	}
	cout<<d<<endl;
	
	cout<<f<<"Total:"<<total<<"                       Status:"<<result<<"          "<<f<<"\n";

	cout<<f<<"Percentage: " <<avg<<"%\t\t  Grade: "<<grade<<setw(width-38)<<f<<"\n";
	c=200;
	d=188;
	cout<<c;
	
	for(int i=0;i<53;i++)
	{
		cout<<e;
	}
	cout<<d<<endl;
}

int main()

{

	cout<<"\t\tMarksheet\n\n";
	marksheet m;
	m.get_studData();
	m.calculate_Data();
	//ms.display();
	m.skeleton();
	return 0;

}
