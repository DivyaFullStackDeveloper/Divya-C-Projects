#include <stdio.h>
#include <stdlib.h>

int main() {
    int  num;
    int binary_num[10];  

    printf("Enter the number: ");
    scanf( &  num);

    if((num & 1) == 0) {
        printf("num is even \n");
    }else {
        printf("num is odd \n");
    }
    return 0;
}


