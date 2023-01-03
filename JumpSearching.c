//
// Created by ADMIN on 01-Jan-23.
//
#include "stdio.h"
#include "stdlib.h"
void sorting(int data[], int size){
    for(int i= 0; i<size-1; i++){
        for (int j = 0; j < size-1-i; ++j) {
            if(data[j]> data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1]= temp;

            }
        }
    }
}

int mini(int first, int second){
    if(first>second){
        return second;
    }else{
        return first;
    }
}

int jumpSearch(int arry[], int keyFinder, int size){
    int step= size/2;
    printf("Step is: %d\n", step);
    int previous= 0;
    while(arry[mini(step, size)-1]< keyFinder){

        previous= step;
        printf("previous value is: %d\n", previous);
        step= step+ size/2;
        printf("Second step is: %d\n", step);

        if(previous>= size){
            return -1;
        }
    }

    int start= step-previous;
    int end= step;
    while (start <= end) {

        int mid = start + (end - start) / 2;


        if (arry[mid] == keyFinder) {
            return mid;
        }

        if (arry[mid] < keyFinder) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arry[]= {23,54,67,97,5,12,34,86,34,67,23,11,23,43,65,66,100};
    int size= sizeof(arry)/ sizeof(arry[0]);
    sorting(arry, size);

//    for (int i = 0; i < size; ++i) {
//        printf("%d :\n", arry[i]);
//    }
    //////////////// jumpSearch ///////
    int Finder= 86;
    int index= jumpSearch(arry, Finder, size);
    if(index != -1){
        printf("We found!\n");
        printf("found at index: %d    data:%d\n", index,arry[index]);

    } else{
        printf("Not found!!!\n");
    }

    return 0;
}
