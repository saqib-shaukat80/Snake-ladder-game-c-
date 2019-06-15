#include<iostream>
#include<iomanip>
#include<time.h>
#include<cstdlib>
#define MAX_NUM 6
using namespace std;
int loading();
int first();
int exit();
int randomfunc(int &score);
void board();
int main()
{
loading();

cout<<endl;
cout<<endl;
cout<<"================================================================================"<<endl;
cout<<endl;
cout<<"\t\t\t*****************************\t\t\t\t"<<endl;
cout<<"\t\t\t*****************************\t\t\t\t"<<endl;
cout<<"\t\t\t***** SNAKE LADDER GAME *****\t\t\t\t"<<endl;
cout<<"\t\t\t*****************************\t\t\t\t"<<endl;
cout<<"\t\t\t*****************************\t\t\t\t"<<endl;
cout<<endl;
cout<<"================================================================================"<<endl;
cout<<endl;
cout<<"1. Start game.\n"<<endl;
cout<<"2. Exit game.\n"<<endl;
int number;
cout<<"Enter menu number :"<<endl;
cin>>number;
while(number<1 || number>2){
	cout<<" Please enter a valid number "<<endl;
	cin>>number;
}
switch(number){
	case 1:
		{
			first();
		}
break;
		case 2:
			{
				exit();
			}
}
}
int first()
{
    cout<<"\t\t\t\tGAME STARTED!!"<<endl;
    cout<<"\t\t\t*******************************";
    board();
    int p1_score=0,p2_score=0;
int var;
string player1,player2;
srand(time(0));
cout<<"Enter the name of  player 1: "<<endl;
cin>>player1;
cout<<"Enter the name of the player 2 "<<endl;
cin>>player2;
cout<<"\t\tPlayer 1 :"<<setw(2)<<player1<<"\n\t\t Player 2 : "<<player2;
cout<<endl;
cout<<"The position of player 1 and player 2 is 0 initially"<<endl;

while(p1_score<100 && p2_score<100)
{

cout<<player1<<" It is your turn, press any key to play "<<endl;
cin>>var;
randomfunc(p1_score);
cout<<"your score is "<<setw(2)<<p1_score<<endl;
cout<<player2<<" It is your turn, press any key to play"<<endl;
cin>>var;
randomfunc(p2_score);
cout<<"your score is "<<setw(2)<<p2_score<<endl;

}
if(p1_score>p2_score)
{
cout<<"\n"<<player1<<" is the winner! \n\tCongratulations"<<endl;
}
else if(p2_score>p1_score)
{
cout<<"\n"<<player2<<" is the winner! \n\tCongratulations"<<endl;
}
else if(p1_score==p2_score)
{
cout<<"\t\t\tMatch is draw...."<<endl;
}
}

int randomfunc(int &score)
{
int random;
random=rand()%MAX_NUM;
cout<<"your number is"<<setw(2)<<random<<endl;
score=random+score;
switch(score)
{
case 98 :
    score=28;
cout<<"Oh! you ran into a snake!"<<endl;
    break;
case 95 :
    score=24;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 92 :
    score=51;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 83 :
    score=19;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 73 :
    score=1;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 69 :
    score=33;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 64 :
    score=36;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 59 :
    score=17;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 55 :
    score=7;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 52 :
    score=11;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 48 :
    score=9;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 46 :
    score=5;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 44 :
    score=22;
cout<<"Oh! you ran into a snake!"<<endl;
break;
case 8 :
    score=26;
cout<<"lucky! you got ladder"<<endl;
break;
case 21 :
    score=82;
cout<<"lucky! you got ladder"<<endl;
break;
case 43 :
    score=77;
 cout<<"lucky! you got ladder"<<endl;
break;
case 50 :
    score=91;
cout<<"lucky! you got ladder"<<endl;
break;
case 54 :
    score=93;
cout<<"lucky! you got ladder"<<endl;
break;
case 62 :
    score=96;
cout<<"lucky! you got ladder"<<endl;
break;
case 66 :
    score=87;
cout<<"lucky! you got ladder"<<endl;
break;
case 80 :
    score=100;
cout<<"lucky! You got ladder"<<endl;
}
return score;
}
void board()
{
    cout<<"\n\t\t\t\tREAD RULES\n\n";
    cout<<"\n\t\t\t\tSNAKE AT POSITION"<<endl;
    cout<<"\n\tFrom 98 to 28 \tFrom 95 to 24\tFrom 92 to 51\tFrom 83 to 19\n\tFrom 73 to 1\tFrom 69 to 33\tFrom 64 to 36\tFrom 59 to 17";
    cout<<"\n\tFrom 55 to 7\tFrom 52 to 11\tFrom 48 to 9\tFrom 46 to 5\n\tFrom 44 to 22\n";
    cout<<"\n\t\t\t\tLADDER AT POSITION"<<endl;
    cout<<"\n\tFrom 8 to 26\tFrom 21 to 82\tFrom 43 to 77\tFrom 50 to 91\n\tFrom 62 to 96\tFrom 66 to 87\tFrom 80 to 100\n\n";
}
int loading()
{

 system("color 3b");
 cout<<"\n\n\n\t\t\t\tPlease wait while loading\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++);
 }
 cout<<"\n\t\t\t\tLoading completed";

}
int exit(){
    cout<<"\n\t\t\t\tGAME ESCAPED!\n\n";
return 0;

}
