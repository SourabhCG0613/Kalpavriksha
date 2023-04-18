/*Not everyone probably knows that Chef has younger brother Jeff. Currently Jeff learns to read.
    He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, Chef gave him a book 
with the text consisting of N words. Jeff can read a word iff it consists only of the letters he knows.
    Now Chef is curious about which words his brother will be able to read, and which are not. Please help him! */

#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
	char knownString[20],word[10];
	int numberOfWords,strLengthWord,strLengthKnown,count;
	scanf("%s",knownString);
	strLengthKnown=strlen(knownString);
	scanf("%d",&numberOfWords);
	for(int iterator=0;iterator<numberOfWords;iterator++)
	{
	    scanf("%s",word);
	    strLengthWord=strlen(word);
	    for(int iterator2=0;iterator2<strLengthWord;iterator2++)
	    {
	        count=0;
	        for(int iterator3=0;iterator3<strLengthKnown;iterator3++)
	        {
	            if(word[iterator2]==knownString[iterator3])
	            {
	                count++;
	                
	            }
	        }
	        if(count==0)
	        {
	            break;
	        }
	    }
	    if(count==0)
	    {
            printf("No\n");
        }else
        {
            printf("Yes\n");
        }
	}
	return 0;
}


