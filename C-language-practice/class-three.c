#include<stdio.h>
#include<string.h>

void calutat(){
    int num1, num2, result;
    char op[5];
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator: ");
    scanf("%s", op);
    if(strcmp(op, "+") == 0){
        result = num1 + num2;
    }
    else if(strcmp(op, "-") == 0){
        result = num1 - num2;
    }
     else if(strcmp(op, "*") == 0){
        result = num1 * num2;
    }
     else if(strcmp(op, "/") == 0){
        result = num1 / num2;
    }
    else{
        printf("invalid operator")
    }
    printf("result " )
}