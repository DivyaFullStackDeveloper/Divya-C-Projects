#include<stdio.h>

// int main(){

//  int swapArray[a][b];

//  for(i = 0; i< a; i++){
//     for(j = 0; j < b; j++){
//         swapArray[j][i] = array[i][j];
//     };
//  };
//  printf("transform array is ---------------\n");

//  for(i = 0; i < a; i++){
//     for(j = 0; j < b; j++){
//         printf("%d", swapArray[i][j]);
//     }
//     printf("\n");
//  };

//  return 0;
// };




// ----------------------------------


// int main() {

//     int a, b;

//     printf("Enter number of rows (a): ");
//     scanf("%d", &a);

//     printf("Enter number of columns (b): ");
//     scanf("%d", &b);

//     int array[a][b];
//     int swapArray[b][a];   
 
//     printf("Enter elements of array:\n");
//     for(int i = 0; i < a; i++){
//         for(int j = 0; j < b; j++){
//             scanf("%d", &array[i][j]);
//         }
//     }

//     for(int i = 0; i < a; i++){
//         for(int j = 0; j < b; j++){
//             swapArray[j][i] = array[i][j];
//         }
//     }
 
//     printf("\nTransformed (Transposed) Array:\n");
//     for(int i = 0; i < b; i++){
//         for(int j = 0; j < a; j++){
//             printf("%d ", swapArray[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// -------------------------------------

int main(){
 
    int row, column, i, j, digonalSum = 0;
    
    printf("Enter a number of rows: ");
    scanf("%d", &row);
    printf("Enter a number of colums: ");
    scanf("%d", &column);

    int array[row][column];

    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("Enter the value of array[%d][%d]: ",i, j);
            scanf("%d", &array[i][j]);
        }
    }


    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("%d", array[i][j]);
        }
        digonalSum = digonalSum + array[i][j];
        printf("\n");
    }
    return 0;
}
