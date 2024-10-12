#include<iostream>
using namespace std;
int main()
{
	int a[3][4];
	int b[3][4];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			int c;
		    cout<<"ENTER THE VALUE OF ROW"<<" "<<i<<" "<<"AND COLOUM"<<" "<< j<<" "<<"=";
			c=a[i][j]+b[i][j];	
			cin>>a[i][j];	
		
	}
		cout<<endl;
	}
		for(int i=0;i<5;i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
