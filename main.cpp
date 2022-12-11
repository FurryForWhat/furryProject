#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void counting();

char arry1 [100], buffer [100];
int line_num= 0;
int i, n;

int main(){
    printf("Enter the word you want to search!!");
    scanf(&arry1[0]);
    int m= strlen(arry1);
    printf("Printing all the positions of word \"%s\" in the file\n", arry1);
   // counting();
   return 0;
}

void counting(){
    FILE *fptr;
    fptr= fopen("test-word.txt", "r");
    while (fgets(buffer, 100, fptr) != NULL){
        i = 0;

        n =strlen(buffer);
    }



}