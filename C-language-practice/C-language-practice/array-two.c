#include<stdio.h>
#include<stdlib.h>

// int exampleOne(){
//     int arrayOne[10] = {1,2,3,4,5,6,7,8,9,10};
//     char *arrayTwo[10] = {"I","II","III","IV","V","VI","VII","VIII","IX","X"};

//     for(int i = 0; i < 10; i++){
//         printf("%d = %s \n", arrayOne[i], arrayTwo[i]);
//     }
     
// }

// void numberToRoman(){
//     int num,a1,k,i;
//     int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
//     char *roman[] = {"CM", "M", "D", "CD", "C", "L", "XC", "XL", "X", "IX", "V", "IV", "I"};

//     printf("Enter a number : ");
//     scanf("%d", &num);

//     printf("Roman number is : ");
//     for(int k = 0; k < 13; k++){
//         a1 = num / numbers[k];
//         for(i = 0; i < a1; i++){
//             printf("%s", roman[k]);
//             num = num % numbers[k];
//         }
       
//     }
// }


// function numberToBinary(){
//     let number = prompt;
//     for(i = 0; 0 < number; i++);
//     value = number%2;
//     array.push(value);
//     number = number / 2;
// }
// for(j = array.length-1; i >= 0; j--){
//     printf(array[j]);

// }
// let i  = 0
// while(0 < number){
//     value = number % 2;
//     array[i] = value;
//     number = number/2;
//     i++;
// }
// int main(){
//       system("clear");
//      numberToBinary();
//       return 0;
// }

// void numberToBinary() {
//     int number, i = 0;
//     int array[32];   
    
//     printf("Enter a number: ");
//     scanf("%d", &number);
    
//     if (number == 0) {
//         printf("Binary: 0\n");
//         return;
//     }
 
     
//     while (number > 0) {
//         array[i] = number % 2;
//         number = number / 2;
//         i++;
//     }
 
//     printf("Binary: ");
//     for (int j = i - 1; j >= 0; j--) {
//         printf("%d", array[j]);
//     }
//     printf("\n");
// }
 


// void convertBinary(){
//     int a, array[16], value;
//     while(number > 0){
//         value = number  % 2;
//         array[a] = value;
//         number = number/2
//         a++
//     }
//     for(int i = a-1; i >= 0; i--){
//         printf("%d", array[i]);
//     }
// }
// void  printBinary(){
//     for(int i = 1; i <= 10; i++){
//         convertBinary();
//     }
// }



int main(){
    int input = 0;
    int array[16] = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    int n[16];
    int newArray[10];
    int sum = 0;
    printf("Enter a length of binary number: \n");
    scanf("%d", &input);

     printf("Enter a number: \n");
     for(int i = 0; i < input; i++){
     scanf("%d", &n[i]);
     if(n[i] == 1 || n[i] == 0){
     newArray[(10-input)+i] = n[i];
       }
       else{
        printf("Invalid input");
        break;
       }
     }

     for(int i = 0; i < 10; i++){
     printf("%d", newArray[i]);    
     if(newArray[i] == 1){
        sum = sum + array[i];
    }
}

printf("\nDecimal number is : %d", sum);
return 0;
}

// int main() {
//     system("clear"); 
//     printBinary();   
  
//     return 0;
// }
