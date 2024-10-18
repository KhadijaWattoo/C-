#include<iostream>
using namespace std;
int addition(int a,int b,int c)
{
 int h;
	cout<<a+b+c<<endl;
      h=a+b+c;
	  return h;   
}
int division(int w,int h )
{
	int i;
	cout<<w/h<<endl;
	i=w/h;
	return i;
}
int multiplication(int e,int i)
{
	int g;
	cout<<e*i<<endl;
	g=e*i;
	return g;
}
int subtract(int m,int g)
{
	int s;
	cout<<g-m<<endl;
	s=g-m;
	return s;
}
 
int main()
{
	int x,y,z,q,v,u,t,o,n,p,l;
	cout<<"ENTER THE FIRST VALUE"<<endl;
	cin>>x;
	cout<<"ENTER THE SECOND VALUE"<<endl;
	cin>>y;
	cout<<"ENTER THE THIRD VALUE"<<endl;
	cin>>z;
		q=addition(x,y,z);
	cout<<"ENTER THE FORTH Value for division"<<endl;
	cin>>v;
	u=division(q,v);
	cout<<"ENTER THE 5TH VALUE multiplication"<<endl;
	cin>>t;
    n=multiplication(t,u);
    	cout<<"ENTER THE 6th value for subtraction"<<endl;
	cin>>p;
    l=subtract(p,n);
}
 


