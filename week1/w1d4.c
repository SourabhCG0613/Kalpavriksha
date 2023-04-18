/*Mario was going to gift Princess Peach a string S of even length N.
Mario was clumsy and thus, broke the string in the middle. He now has two strings A and B such that 
A=S[1,N/2] and B=S[(N/2)+1, N].
Mario is not sure about the order in which he should join the strings A and B to get the string S. 
Thus, he joins the strings in any random order. 
Find whether it is guaranteed that Mario will get the same string S if he joins the strings A and B in any order.*/

#include <stdio.h>
#include <string.h>
int main(void) {
	int testcases,strLength;
	char inputString[1000],subStr1[500]= "",subStr2[500] = "";
	scanf("%d",&testcases);
	while(testcases--){
	    scanf("%d",&strLength);
	    int length = strLength;
	    int midpoint = length/2;
	    scanf("%s",&inputString);
	    for(int iterator =0 ;iterator<midpoint;iterator++){
	        subStr1[iterator] = inputString[iterator]; 
	    }
	     subStr1[midpoint] = '\0';
	    for(int iterator =0; iterator<length - midpoint;iterator++){
	        subStr2[iterator] = inputString[iterator + midpoint];
	    }
	    subStr2[length - midpoint] = '\0';
	    
	    int result = strcmp(subStr1,subStr2);
	    if(result == 0){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	    
	}
	return 0;
}