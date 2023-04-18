//Question:-
/*Chef invented a modified wordle.
There is a hidden word S and a guess word T, both of length 5
Chef defines a string M to determine the correctness of the guess word. For the i th index:
  * If the ith index is same the ith index of string M is 'G'.
  * If the ith index is not same the ith index of string M is 'B'. */

#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int testcases;
	char input1[5];
	char input2[5];
	char outputString[5];
	scanf("%d",&testcases);
	for(int iterator=0; iterator<testcases; iterator++){
	    scanf("%s",input1);
	    scanf("%s",input2);
	    for(int iterator2=0; iterator2<5; iterator2++){
	        if(input1[iterator2] == input2[iterator2]){
	            outputString[iterator2] = 'G';
	        }
	        else{
	            outputString[iterator2] = 'B';
	        }
	    }
	    printf("%s",outputString);
	}
	return 0;
}