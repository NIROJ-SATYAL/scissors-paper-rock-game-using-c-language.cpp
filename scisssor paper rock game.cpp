#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int SPR(char you,char comp)
{

 if(you==comp)
{
	return 0;
}
if(you=='s'&& comp=='p')
{
	return 1;
}
else if(you=='p'&& comp=='s')
{
	return -1;
}
if(you=='s'&& comp=='r')
{
	return -1;
}
 else if(you=='r'&& comp=='s')
{
	return 1;
}
if(you=='p'&& comp=='r')
{
	return 1;
}
 else if(you=='r'&&  comp=='p')
{
		return-1;
}
}
int main()
{
	int i;
	char you,comp;
	srand(time(0));
	int num=rand()%100+1;//to generate random number between 1  and 100//
	if(num<33)
	{
		comp='s';
	}
	else if(num>33&&num<66)
	{
		comp='p';
	}
	else
	{
		comp='r';
	}
	printf("****************** SCISSOR,PAPER AND ROCK GAME**********************\n");
	
	
	printf("\t\t\tchoose s for scissor, p for paper and r for rock\n");
	scanf("%c",&you);
	int result=SPR( you,comp);
	{
		
	
	
	if(result ==0)
	{
		printf("\t\tOHH!!!!!!ITS DRAW..SEE YOU SOON\n");
	}
	else if(result==1)
	{
		printf("\t\tHURRY!!!! YOU WON THE GAME\n");
	}
		else{
			printf("\t\tSORRY!! ITS YOUR BAD DAY..TRY AGAIN\n");
		}
	
		printf("you choose %c and computer choose %c",you,comp);
	
		return 0;
	}
}

