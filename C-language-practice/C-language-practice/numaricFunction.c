#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    system("clear");
    int x;

    // Return absolute value of integer
    x = abs(-10);
    printf("%d", x);
    printf("\n")
    
    // Return square root value of integer
    x = 16;
    printf("Square root of %d is %f\n", x, sqrt(x));

    // Return power value of integer
    printf("Power of %d is %f\n", 2,pow(2,7));


    // ceiling value
    float a = 2.5;
    printf("Ceiling value of %d is %d\n", a, ceil(a));

    // flore value
    printf("Floor value of %fis %f\n", 5.55, floo(5.55));

    // Rounding value
    printf("Rounding value of %f is %f\n", a, round(a));

    // Return logaritham value
    printf("lagaritham value of %d is %f\n", 10, log(10));
    printf("lagaritham value of %d is %f\n", 10, log10(10));

    
    return 0;
}