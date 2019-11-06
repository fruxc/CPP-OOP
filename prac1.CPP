#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void units(int a)
{
	switch(a) {
		case 1:
			cout<<"one";
			break;
		case 2:
			cout<<"two";
			break;
		case 3:
			cout<<"three";
			break;
		case 4:
			cout<<"four";
			break;
		case 5:
			cout<<"five";
			break;
		case 6:
			cout<<"six";
			break;
		case 7:
			cout<<"seven";
			break;
		case 8:
			cout<<"eight";
			break;
		case 9:
			cout<<"nine";
			break;
		case 10:
			cout<<"ten";
			break;
		case 11:
			cout<<"eleven";
			break;
		case 12:
			cout<<"twelve";
			break;
		case 13:
			cout<<"thirteen";
			break;
		case 14:
			cout<<"fourteen";
			break;
		case 15:
			cout<<"fifteen";
			break;
		case 16:
			cout<<"sixteen";
			break;
		case 17:
			cout<<"seventeen";
			break;
		case 18:
			cout<<"eighteen";
			break;
		case 19:
			cout<<"nineteen";
			break;

	}
}
void tens(int a) {
	switch(a) {
		case 2:
			cout<<"twenty";
			break;
		case 3:
			cout<<"thirty";
			break;
		case 4:
			cout<<"forty";
			break;
		case 5:
			cout<<"fifty";
			break;
		case 6:
			cout<<"sixty";
			break;
		case 7:
			cout<<"seventy";
			break;
		case 8:
			cout<<"eighty";
			break;
		case 9:
			cout<<"ninety";
			break;
	}
}

void main() {
	clrscr();
	long int a;

	cout<<"Enter a number: ";
	cin>>a;


		long int b=0,mod=0,counter=0;
		b=a;
		while(b > 0) {
			mod=mod*10+b%10;
			b=b/10;
			counter++;
		}

		cout<<mod;

		if(counter == 5) {
			int x = (mod % 10);
			mod /=10;
			int fin = (x * 10) + (mod % 10);

			if(fin < 20) {
				units(fin);
				cout<<"thousand";

				counter -= 2;

				mod /= 10;

				if((a % 10000) == 0)
					goto label;
			} else {
				tens(x);

				counter--;
			}
		}

		switch(counter) {
		       /*	case 5:

				*/
			case 4:
				units(mod % 10);
				cout<<"thousand";
				mod /= 10;
				if((a % 1000) == 0)
					break;
			case 3:
				units(mod % 10);
				cout<<"hundred";
				mod /= 10;
				if((a % 100) == 0)
					break;
			case 2:
				if(mod < 20) {
					tens(mod);
					mod /= 100;
				} else {
					tens(mod % 10);
					mod /=10;
				}

			case 1:
				units(mod);
				break;

		}

		label:


/*if(counter==2)
{
long int tenp=mod%10;
long int unip=mod/10;
ten(tenp);
unit(unip);
}
else if(counter==3)
{
long int hund=mod%10;
long int quo=mod/10;
long int tenp=quo%10;
long int unip=quo/10;
if(a%100==0)
{
unit(hund);
cout<<"hundred";
}
else
{
unit(hund);
cout<<"hundred";
ten(tenp);
unit(unip);
}
}
else if(counter==4)
{
long int thou=mod%10;
long int quo=mod/10;
long int hund=quo%10;
long int quon=quo/10;
long int tenp=quon%10;
long int unitp=quon/10;
if(a%1000==0)
{
unit(thou);
cout<<"thousand";
}
else
{
unit(thou);
cout<<"thousand";
unit(hund);
cout<<"hundred";
ten(tenp);
unit(unitp);
}
}
else if(counter==5)
{
long int tenthou=mod%10;
long int temp=tenthou*10;
long int quo=mod/10;
long int thou=quo%10;
long int temp1=temp+thou;
long int quon=quo/10;
long int hund=quon%10;
long int quonn=quon/10;
long int tenp=quonn%10;
long int unitp=quonn/10;
if(a%10000==0)
{
if(temp1<21)
{
unit(temp1);
cout<<"thousand";
}
else
{
ten(tenthou);
unit(thou);
cout<<"thousand";
}
}
else
{
if (temp1<21)
{
unit(temp1);
}
else
{
ten(tenthou);
unit(thou);
}
cout<<"thousand";
if(hund>0)
{
unit(hund);
cout<<"hundred";
}
ten(tenp);
unit(unitp);
}
}       */

	getch();

}