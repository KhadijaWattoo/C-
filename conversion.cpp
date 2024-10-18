
#include<iostream>
using namespace std;
int main()
{
	int l,m;
	cout<<"Enter the choice for conversion"<<endl;
	cout<<"Enter 1 for conversion from centimeter to meter"<<endl;
	cout<<"Enter 2 for conversion from kilometer to meter"<<endl;
    cout<<"Enter 3 for conversion from milimeter to meter"<<endl;
    cout<<"Enter 4 for conversion from centimeter to kilometer"<<endl;
    cout<<"Enter 5 for conversion from milimeter to kilometer"<<endl;
	cout<<"Enter 6 for conversion from meter to centimeter"<<endl;
    cout<<"Enter 7 for conversion from centimeter to milimeter"<<endl;
    cout<<"Enter 8 for conversion from meter to milimeter"<<endl;
    cin>>l;
    cout<<"Enter the length for conversion"<<endl;
    cin>>m;
     if(l==1)
    {
    	cout<<m/100<<" meters";
	}
	else if(l==2)
	{
		cout<<m*1000<<" meters";
	}
	else if(l==3)
	{
		cout<<m/1000<<" meters";
	}
	else if(l==4)
	{
		cout<<m/100000<<" kilometers";
	}
	else if(l==5)
	{
		cout<<m/1000000<<" kilometers";
	}
	else if(l==6)
	{
		cout<<m*100<<" centimeters";
	}
	else if(l==7)
	{
		cout<<m*10<<" milimeters";
	}
	else if(l==8)
	{
		cout<<m*1000000<<" milimeter";
	}
	else
	{
		cout<<"wrong choice";
	}
}
