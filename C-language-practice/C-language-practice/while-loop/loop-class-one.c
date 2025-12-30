#include <stdio.h>
#include<stdlib.h>

void checkNumber() {
    int numOne, numTwo;
    

    printf("Enter your favorite number: ");
    scanf("%d", &numOne);

    if (numOne % 2 == 0) {
        printf("%d is an even number.\n", numOne);
    } else {
        printf("%d is an odd number.\n", numOne);
    };
}





int main() {
    system("clear");
    checkNumber();
    return 0;
}
