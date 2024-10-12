#include<iostream>
using namespace std;
int main()
{
int x,y,a;
cin>>x;
cin>>y;

cout<<"ENTER THE CHOICE"<<endl;
cin>>a;

if(a==1)
{
	cout<<x+y<<endl;
}
else if(a==2)
{
	cout<<x-y<<endl;
}
else if (a==3)
{
	cout<<x*y<<endl;
}
else if (a==4)
{
	cout<<x/y<<endl;
	
}
else 
{
	cout<<"WRONG STATEMENT"<<endl;
}
}
