#include<iostream>
using namespace std;
	char box[10]={ '0','1','2','3','4','5','6','7','8','9'};
void structure();
	 int win();
int main()
{
 	int player=1;
 	int i;
 	int choice ;
	 char variable;
   do
   
   {	  
   structure();
   
    	  if(player%2==1)
    {
    	player=1;
	}
	else
	{
		player =2;
	}
    	 
       cout << "Player " << player << ", Enter a number:  ";
        cin>>choice;
        	if(player==1)
	{
		variable ='X';
	}
	else
	{
		variable ='O';
	}
         
        if (choice == 1 && box[1] == '1')

            box[1] = variable;
        else if (choice == 2 && box[2] == '2')

            box[2] = variable;
        else if (choice == 3 && box[3] == '3')

            box[3] = variable;
        else if (choice == 4 && box[4] == '4')

            box[4] = variable;
        else if (choice == 5 && box[5] == '5')

            box[5] = variable;
        else if (choice == 6 && box[6] == '6')

            box[6] = variable;
        else if (choice == 7 && box[7] == '7')

            box[7] = variable;
        else if (choice == 8 && box[8] == '8')

            box[8] = variable;
        else if (choice == 9 && box[9] == '9')

            box[9] = variable;
        else
        {
            cout<<" wrong number ";
        }
        i=win();
        player++;
    }
    while(i ==-1);
    {
    	structure();
    	if(i==1)
    	{
    		cout<<"==>player " << --player << " win"<<endl;
		}
		else
		{
			cout<<"game over"<<endl;
			 
			return 0; 
		}
	}
	
 
	
 
}
 void structure()
{
 
	 	cout<<"Tic Tac Toe game"<<endl;
	cout<<"Player (1) || Player (2)"<<endl;
  cout<<"Player (1) 'X' || Player (2) 'O'"<<endl;
cout<<endl;
	 
	 	 cout << "     |     |     " << endl;
    cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;

    cout << "     |     |     " << endl ;
	 } 
	 
	 
	 
	 int win()
	 {
	 		if (box[1] == box[2] && box[2] == box[3])
	  {
	  return 1;
		}
	else if (box[4] == box[5] && box[5] == box[6])
		 {
		 	return 1;
		 }
	else if (box[7] == box[8] && box[8] == box[9])
		 {
		 	return 1;
		 } 
	else if (box[1] == box[4] && box[4] == box[7])
	  {
	  	return 1;
		 }
	else if (box[2] == box[5] && box[5] == box[8])
	  {
	  	return 1;
		 }
	else if (box[3] == box[6] && box[6] == box[9])
	  {
	  	return 1;
		 }
	else if (box[1] == box[5] && box[5] == box[9])
		  {
		  	return 1;
		 }
	else if (box[3] == box[5] && box[5] == box[7])
	  {
	  	return 1;
		 }
	else if (box[1] != '1' && box[2] != '2' && box[3] != '3' && box[4] != '4' &&
    box[5] != '5' && box[6] != '6' && box[7] != '7' && box[8] != '8' && box[9] != '9')
		  {
		  	return 0;
		 }
	else
		 {
		 	return -1;
		 }
	  } 
