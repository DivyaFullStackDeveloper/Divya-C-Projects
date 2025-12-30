#include <stdio.h>
#include <string.h>   
#include<stdlib.h> 
int main() {
    int i = 0, sum = 0, avg = 0, num;
    

        printf("Enter a number: ");
        scanf("%d", &num);

        if(num <= ':' && num >= '~'){
            printf("Invalid Input, Please enter a number : ");
        }
        else{
            sum = sum + num;
            while(i<=1){
                printf("Enter a number : ");

                scanf("%d", &num);
                sum += num;
                i++;
            }
        }
        avg = sum / 3;
        printf("%d", avg);
        return 0;
    }


 