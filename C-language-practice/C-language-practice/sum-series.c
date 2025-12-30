#include <stdio.h>

int main() {
    float x;
    int n;
    float sum = 0;
    int i = 1;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += x / i;
        i++;
    }

    printf("Sum of series = %f\n", sum);

    return 0;
}
