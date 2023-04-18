//Question:-
//Given a string, S, consisting of alphabets and digits, find the frequency of each digit in the given string.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {

    char inputString[50];
    static int countArray[10];
    scanf("%[^\n]",inputString);
    int iterator=0;
    while(inputString[iterator] != '\0'){
        if(isdigit(inputString[iterator])){
            int currentNumber = inputString[iterator] - '0';
            countArray[currentNumber] = countArray[currentNumber] + 1;
        }
        iterator++;
    }   
    for(int iterator2=0; iterator2<10; iterator2++){
        printf("%d ",countArray[iterator2]);
    }
    return 0;
}