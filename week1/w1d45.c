//Question:-
/*You are given a binary string S of length N. 
You can perform the following operation on S: Pick any set of indices such that no two picked indices are adjacent.
Flip the values at the picked indices (i.e. change 0 to 1 and 1 to 0).
Find the minimum number of operations required to convert all the characters of S to 0.*/

#include <stdio.h>

int main() {
    int testcases;
    scanf("%d",&testcases);
        while(testcases-- > 0){
            int strLength;
            scanf("%d",&strLength);
            char binaryString[strLength];
            scanf("%s",binaryString);
            
            int changesNeeded= 0;
            if(binaryString[0]=='1'){ 
                changesNeeded = 1;
        }
        for(int i = 1; i<strLength ; i++){
            if(binaryString[i]=='1' && binaryString[i-1]=='1'){
                changesNeeded = 2;
                break;
            }
            else if(binaryString[i] == '1'){ 
                changesNeeded = 1;
            }
        }
  
    printf("%d\n",changesNeeded);
    }
	return 0;
}