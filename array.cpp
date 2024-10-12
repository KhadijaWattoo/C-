#include<iostream>
using namespace std;
int main()
{
	int y[5];   
int x[5];
	for(int i=0;i<5;i++)
	{
	cout<<"enter the ist array value of"<<i<<"index"<<endl;
	cin>>x[i];
	}
	for(int i=0;i<5;i++)
	{
	cout<<"enter the 2nd array value of"<<i<<"index"<<endl;
	cin>>y[i];
	}
	
	for(int i=0;i<5;i++)
{   
	cout<<"the output of 2nd array " <<i<<" index value";
    cout<<y[i]<<endl;
}
 
 	for(int i=0;i<5;i++)
{   
	cout<<"the output of 1st array " <<i<<" index value";
    cout<<x[i]<<endl;
}
 
}
