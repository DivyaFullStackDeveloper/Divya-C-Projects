#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void convertRoman(int number, char input[10]){
char roman[13][3] = {"M", "D", "CD", "C", "L", "XC", "XL", "X", "IX", "V", "IV", "I"};
int nums[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
int value;

 for(int i = 0; i < 13; i++){
  value = number / nums[i];
 for(int a = 0; a < value; a++){
    if(strcat(input, roman[i]) == 0){
  printf("%s \n", roman [i]);
    }
}
  number = number % nums[i];
 }
}

int main() {
     system("clear");
     char input[10];
     printf("Enter a number : \n");
     scanf("%s", input);

    for (int i = 0; i <= 10; i++){
        convertRoman(i, input);
        printf("\n");
    }
    return 0;
}



// #include <stdio.h>

// void convertRoman(int number, char input[10]) {
//     char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
//     int values[] =  {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
//     for (int i = 0; i < 13; i++) {
//         while (number >= values[i]) {
//             printf("%s", roman[i]);
//             number -= values[i];
//         }
//     }  
// }
// int main() {
//      system("clear");
//     for (int i = 1; i <= 10; i++) {
//         convertRoman(i);
//         printf("\n")
//     }
//     return 0;
// }
