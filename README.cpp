#include "stdio.h"
#include "stdlib.h"

int main(){
    //declaritaion variable
    int age=0;
    int key= 0;

    //intro game
    while(true){
        printf("This is happy world game!!!! \n");
        printf("Enter your age \n");   //age
        scanf("%d", &age);          //age
        printf("Your age is: %d \n", age);

     //age limitation
        if(age>= 18){
            printf("You can play game!! \n");
    //account ask
            while(){
                printf("have already account?? press 1 \n");
                printf("register?? press 2 \n");
                scanf("%d", &key);
    //account check
                if(key==1){
                    printf("Enter your account \n");
                    continue;
                }else if( key== 2){
                    printf("This is registration \n");
                    continue;

                }else {

                    printf("Choose 1 or 2 \n"); //????????

                    continue;
                }
            }
            printf("The form is still working:3");


        }else{
            printf("Your are under age!!! \n try agin \n");
        }

    }
    return 0;
}
