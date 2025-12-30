#include<stdio.h>
#include<stdlib.h>
// Assign
// read
// add
// subtraction
// Multiplication
// Transpose
// row wise sum
// colum wise sum


int main(){
    system("clear");
    // Assign 20 array
    int array[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // Read array
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");


    // Addition of two array
    int arrayOne[3][3] = {
        {5,4,6},
        {8,9,3},
        {1,2,7}
    };

    int newArray[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            newArray[i][j] = array[i][j]+arrayOne[i][j];
            printf("%d", newArray[i][j]);
        }
        printf("\n");
    }


    // Subtraction of two array
     int arrayTwo[3][3] = {
        {1,2,3},
        {5,4,6},
        {7,8,9}
    };

    int subArray[3][3];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            subArray[i][j] = array[i][j]-arrayTwo[i][j];
            printf("%d", subArray[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    // Multiplication of two array
     for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d", newArray[i][0]+arrayTwo[1][j]-newArray[i][0]+arrayTwo[1][i]);
        }
        printf("\n");
    }

    printf("\n");
    
    // Transpose Array
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d", array[j][i]);
        }
        printf("\n");
    }
    printf("\n");

    // Row wise sum
    for(i = 0; i < 3; i++){
        int sum = 0;
        for(j = 0; j < 3; j++){
            sum += array[i][j];
        }
        printf("%d", sum);
        printf("\n");
    }
    printf("\n");

    // column wise sum
    for(i = 0; i < 3; i++){
        int sum = 0;
        for(j = 0; j < 3; j++){
            sum += array[j][i];
        }
        printf("%d", sum);
        printf("\n");
    }

    return 0;
}