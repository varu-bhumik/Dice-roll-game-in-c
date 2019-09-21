#include<stdio.h>
#include<iostream>
#include<strings.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	printf("\n First thing first, lets start with the rules.");
	printf("\n\n Welcome to the game where we depict the power of probability.");
	printf("\n\n You are given three dices and you need to predict a number that we would take as your guess.");
	printf("\n\n You are supposed to decide an initial amount that you would like to play with before every turn.");
	printf("\n\n If your guessed number arrives at any of the three dices your amount would be doubled, or in the reverse case you lose the amount.");
	printf("\n lets get going then..\n\n\n\n");
	char user;
	printf("\n\n CLEAR WITH THE RULES? press 'y' to continue\n");
	scanf("%c",&user);
	
	
	if(user=='y')
		system("cls");
		
		
	int dice1=0,dice2=0,dice3=0;int choice=0;
	int guess=0;
	printf("\n up for a trial: \n \t press 1 if its games on.\t press 2 to quit.");
	scanf("%d",&choice);
	srand(time(NULL));
	int bet;
	int total_lost=0;
	int total_wins=0;
	int final_amount=0;
	while(choice==1)
	{
		printf("\n enter your bet amount: ");
		scanf("%d",&bet);
		printf("\n Enter your guess: ");
		scanf("%d",&guess);
	//	srand(time(NULL));
		dice1=rand()%6+1;
	//	srand(time(NULL));
		dice2=rand()%6+1;
	//	srand(time(NULL));
		printf("The two dices rolled on to: %d %d %d",dice1,dice2);
		if(dice1==guess||dice2==guess)
		{
			printf("\nYOU WIN");
			total_wins+=bet;
		}
		else
		{
			printf("\n You loose");
			total_lost-=bet;
		}
		
		time_t start;
		start=clock();
		while((clock()-start)/CLOCKS_PER_SEC!=1)
		{
			
		}
		system("cls");
	printf("\n up for a trial: \t press 1 if its games on.\t press 2 to quit.");
	scanf("%d",&choice);
	
	}
	system("cls");
	printf("game_over");
	printf("\n time for results: ");
	printf("\n total amount lost: %d",0-total_lost);
	printf("\n total amount won: %d",total_wins);
	if(total_wins>total_lost)
	printf("\n the game won you rupees: %d",(total_wins+total_lost));
	else
	printf("\n the game lost you rupees: %d",(total_lost+total_wins));
	
	
}
