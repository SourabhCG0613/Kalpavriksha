/*You are given a string S of length N.
Your task is to delete a subsequence of maximum length from the string, such that, after concatenating the 
remaining parts of the string, it becomes a palindrome of length greater than 1.
If this is possible, print the maximum length of the subsequence that can be deleted. Otherwise, print −1.*/

#include <stdio.h>
int main(void)
{
	int testCase;
	scanf("%d",&testCase);
	while(testCase--)
	{
	    int strLength;
	    scanf("%d",&strLength);
	    int countArray[strLength];
	    char inputString[strLength];
	    scanf("%s",inputString);
	    for(int iterator=0;iterator<strLength;iterator++){
	    	countArray[iterator]=0;
	        for(int iterator2=0;iterator2<strLength;iterator2++){
	            if(inputString[iterator]==inputString[iterator2])
                    countArray[iterator]++;
	       }
	    }
	    int subSequencLength=0;
	    for(int iterator=0;iterator<strLength;iterator++){
	        if(countArray[iterator]>=2) 
                subSequencLength++;
	    }
	   if(subSequencLength>=1) 
            printf("%d\n",strLength-2);
	   else 
            printf("-1\n");
	}
	return 0;
}
