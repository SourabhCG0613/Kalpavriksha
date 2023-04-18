/*Alice and Bob are playing a game. They have a common string S of length N. The players also have their individual 
strings A (belonging to Alice) and B (belonging to Bob) which are empty in the beginning. Game begins with Alice 
and both players take alternate turns.
    In her/his turn, the player picks a single character from string S, adds it to the end of their individual string 
and deletes the picked character from string S.
    The game continues until string S is empty. Find whether there exists a sequence of moves such that the strings 
A and B are same at the end of the game.*/

#include <stdio.h>
int main() {
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)  {
        int strLength,flag;
        scanf("%d",&strLength);
        char inputString[strLength];
        scanf("%s",inputString);
        if(strLength%2 !=0)  {
            printf("NO \n");
        }  
        else   {
            for(int iterator=0;iterator<strLength;iterator++)  {
                if(inputString[iterator] !='0')  {
                    for(int iterator2=iterator+1;iterator2<strLength;iterator2++)  {
                        flag=1;
                        if(inputString[iterator]==inputString[iterator2])  {
                            inputString[iterator2]='0';
                            flag=0;
                            break;
                        }
                    }
                    if(flag==1)  {
                        printf("NO \n");
                        break;
                    }
                }
            }
            if(flag==0)
                printf("YES \n");
        }
    }
    return 0;
}