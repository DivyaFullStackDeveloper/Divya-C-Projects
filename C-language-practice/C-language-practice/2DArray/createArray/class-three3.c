#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// int main(){
//     system("clear");

//     int row, column, i, j;


//     // for array one
//     printf("Enter no of  row for array one: ");
//     scanf("%d", &row);
   
//     printf("Enter no of column for array one :");
//     scanf("%d", &column);

//     int arrayOne[row][column];

//     for(i=0; i<row; i++){
//         for(j = 0; j < column; j++){
//             printf("Enter a value of arrayOne[%d][%d] : ",i,j);
//             scanf("%d", &arrayOne[i][j]);
//         }
//     }


//      for(i=0; i < row; i++){
//         for(j =0 ; j < column; j++){
//             printf("Enter a value of arrayOne[%d][%d] : ",i,j);
//             scanf("%d", &arrayOne[i][j]);
//         }
//           printf("\n ");
//     }

//     // for array two
//     printf("Enter no of  row for array two : ");
//     scanf("%d", &row);
   
//     printf("Enter no of column for array two :");
//     scanf("%d", &column);

//     int arrayTwo[row][column];

//     // print values from array
//      for(i=0; i<row; i++){
//         for(j=0; j<column; j++){
//             printf("Enter a value of arrayTwo[%d][%d] : ",i,j);
//             scanf("%d", &arrayTwo[i][j]);
//         }
//     }

//     // print values from array
//     for(i = 0; i < row; i++){
//         for(j = 0; j < column; j++){
//             printf("%d", arrayOne[i][j]);
//         }
//          printf("\n");
//     }


//        for(i = 0; i < row; i++){
//         for(j = 0; j < column; j++){
//             printf("%d", arrayTwo[i][j]);
//         }
//          printf("\n");
//     }
// }





int main(){
    system("clear");
    int i, j;

    int arrayOne[2][2] = {
        {1,2},
        {4,5}
    };

    int arrayTwo[2][2] = {
        {6,7},
        {1,2}
    };

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
        printf("(%d x %d)+(%d * %d) ", arrayOne[i][0], arrayTwo[0][j], arrayOne[i][1], arrayTwo[1][j]);
    }
    printf("\n");
   }
     printf("\n");
     printf("\n");
     

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d", arrayOne[i][0]*arrayTwo[0][j]+arrayOne[i][1]*arrayTwo[1][j]);
        }
       printf("\n");
 }
return 0;
}


// 1x6+2*1   1*7+2*2
// 4*6+5*1   4*7+5*2