#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    int sum = num1 + num2 + num3;
    int average = num1 + num2 + num3 /3; 


    printf("Sum: %d\n", sum);
    printf("Average:%d\n", average);
}