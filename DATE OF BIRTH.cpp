#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,x;
	cout<<"ENTER THE BIRTH YEAR"<<endl;
	cin>>a;
	cout<<"ENTER THE CURRENT YEAR"<<endl;
	cin>>b;
	c=b-a;
	cout<<c<<endl;
	cout<<"ENTER THE TOTAL MONTHS"<<endl;
	d=c*12;
	cout<<d<<endl;
	cout<<"ENTER THE TOTAL WEEKS"<<endl;
    e=d*4*365;
	cout<<e<<endl;	
	cout<<"ENTER THE TOTAL DAYS"<<endl;
	f=e*7;
	cout<<f<<endl;
	cout<<"ENTER THE TOTAL HOURS"<<endl;
	g=f*24;
		cout<<g;
	cout<<"ENTER THE TOTAL MINUTES"<<endl;
    h=g*60;
    	cout<<h<<endl;
	cout<<"ENTER THE TOTAL SECONDS"<<endl;
	x=h*60*60;
		cout<<x<<endl;
}
