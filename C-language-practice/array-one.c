#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ExampleOne(){
    int num, arrOne[20], arrTwo[20], arrThree[20], i, product = 0;

    printf("Enter a array one size: \n");
    scanf("%d", &num);

    printf("Enter a number of array one: \n");
    for(i = 0; i < num; i++){
        scanf("%d", &arrOne[i]);
    }

    printf("Enter a number of array two: \n");
    for(i = 0; i < num; i++){
        scanf("%d", &arrTwo[i]);
    }

    printf("product of two array is: ");
    for(i = 0; i < num; i++){
        product = arrOne[i] * arrTwo[i];
        printf("%d, ", product);  
    }
}                 



// sort number 

void ExampleTwo(){
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
 
    printf("Array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}


// main variable
int main(){
    system("clear");
    ExampleTwo();
    return 0;
}