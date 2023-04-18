//Question:-
//Given a sentence, S, print each word of the sentence in a new line.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char input[1000];
    scanf("%[^\n]",input);
    char *token=strtok(input, " ");
    while(token != NULL){
        printf("%s\n",token);
        token = strtok(NULL, " ");
    }
    return 0;
}