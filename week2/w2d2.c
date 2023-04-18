/*Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard 
to pronounce.
    We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. 
For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.
    You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to pronounce 
or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.
*/

#include <stdio.h>

int main(void) {
	int testCases;
	scanf("%d",&testCases);
	while(testCases--)
	{
	    char vowels[]={'a','e','i','o','u'};
	    int strlength,count=0;
	    scanf("%d",&strlength);
	    char inputString[strlength];
	    scanf("%s",inputString);
	    for (int iterator=0;iterator<strlength;iterator++)
	    {
	        for (int iterator2=0;iterator2<5;iterator2++)
	        {
	            if (inputString[iterator]==vowels[iterator2])
	            {
	            count=0;
	            break;
	            }
	            else if((inputString[iterator]!=vowels[iterator2])&& (iterator2<4))
	            continue;
	            else if((inputString[iterator]!=vowels[iterator2])&&(iterator2==4))
	            count++;
	        }
	        if (count>=4)
	        break;
	    }
	    if(count>=4)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
	return 0;
}

