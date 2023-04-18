/*Chef likes to play table tennis. He found some statistics of matches which described who won the points in order. 
A game shall be won by the player first scoring 11 points except in the case when both players have 10 points each,
then the game shall be won by the first player subsequently gaining a lead of 2 points. 
Could you please help the Chef find out who the winner was from the given statistics? 
(It is guaranteed that statistics represent always a valid, finished match.)*/

#include <stdio.h>

int main(void) {
	int testCases;
	scanf("%d",&testCases);
	while(testCases--)
	{
	    char input[100];
        scanf("%s" ,input);
        int count1=0,count0=0,iterator;
        for(iterator=0;iterator<strlen(input);iterator++)
        {
            if(input[iterator]=='1')
            count1++;
            else
            count0++;
            
            
        }
        if(count1>count0)
        printf("\nWIN");
        else
        printf("\nLOSE");
	}
	return 0;
}

