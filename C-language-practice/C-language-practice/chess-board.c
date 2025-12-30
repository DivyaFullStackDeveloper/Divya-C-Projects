#include<stdio.h>
#include<string.h>

// int main(){
//     int r, c;
//     char chess[8][8];

//     for(r = 0; r < 8; r++){
//         for(c = 0; c < 8; c++){
//             if((r+c) % 2 ==){
//                 chess[r][c] = 'W';
//             }
//             else{
//                 chess[r][c] = 'B';
//                 printf("%c", chess[r][c]);
//             }
//         }
//         printf("\n")
//     }
//     return 0;
// }



// void range(){
//     int i, n, sum = 0, avg = 0, count = 0;

//     printf("Enter a number : ");
//     scanf("%d", &n);

//     for(i = 1; i <= n; i++){
//         if((i % 2) ! = 0){
//             printf("%d\n", i);
//             sum += i;
//             count++;
//         }
//     }

//     avg = sum / count;
//     printf("Sum is : %d\n", sum);
//     printf("Average is : %d", avg);
// }
 
// ----------------------------------

void range(){
    int i, n, sum = 0, avg = 0, count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if((i % 2) != 0){     // Corrected '!=' spacing
            printf("%d\n", i);
            sum += i;
            count++;
        }
    }

    if(count > 0){
        avg = sum / count;
    }

    printf("Sum is : %d\n", sum);
    printf("Average is : %d\n", avg);
}


// -------------------------------------------


void digiSum(){
    int num, sum = 0, value, temp;

    printf("Enter a number : ")
    scanf("%d", &num);

    value = num;

    while(value > 0){
        temp = value %10;
        sum = sum + temp;
        value = value / 10;
    }
}




int main(){
    range();
    return 0;
}
