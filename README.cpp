#include "stdio.h"
#include "stdlib.h"

int main(){
    int age=0;

    int record= 0;
    int wrongKey= 0;
    int key= 0;
    while(true){
        printf("This is happy world game!!!! \n");
        printf("Enter your age \n");   //age
        scanf("%d", &age);          //age
        printf("Your age is: %d \n", age);

        if(age>= 18){
            printf("You can play game!! \n");



            for( int i= 0; i<5; i ++){
                printf("have already account?? press 1 \n");
                printf("register?? press 2 \n");
                scanf("%d", &key);
                if(key==1){
                    printf("Enter your account \n");
                    exit(1);
                }else if( key== 2){
                    printf("This is registration \n");
                    exit(1);

                }else {

                    printf("Choose 1 or 2 \n"); //????????
                   i=+i;
                }

            }
            printf("The form is still working:3");


        }else{
            printf("Your are under age!!! \n try agin \n");
        }

    }
    return 0;
}
