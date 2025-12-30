// #include<stdio.h>
//  void check(){
//     char input; 

//     printf("Enter a single letter");
//     scanf("%s" , &input);

//     if(strcmp(&input, "a")== 0 || strcmp(&input, "e")== 0 || strcmp(&input, "i")== 0 || strcmp(&input, "o")== 0 || strcmp(&input, "u")== 0 ){
//         printf("Letter is a vovel");
//     }else{
//         printf("letter is consonent");
//     }
// }

// int main(){
//     check();
//     return 0;
// }


//--------- check vowel  

// #include <stdio.h>
// #include <string.h>

// void check() {
//     char input; 

//     printf("Enter a single letter: ");
//     scanf(" %s", &input);  

//     if (input == "a" || input == "e" || input == "i" || input == "o" || input == "u" ||
//         input == "A" || input == "E" || input == "I" || input == "O" || input == "U"
//     ) {
//         printf("Letter is a vowel");
//     } else {
//         printf("Letter is a consonant");
//     }
// }


// --------- check leep year

// #include <stdio.h>
// #include <string.h>
// void leapYear(){
//     int year;

//     printf("Enter a year");
//     scanf("%d", &year);

//     (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
//      printf ("%d is a leap year", year) :
//      printf ("%d not leap year", year) ;
   
// }

// ------- check temprature

#include <stdio.h>
#include <string.h>

 
void temperature() {
    int temp;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &temp);

    (temp < 0) ? printf("Freezing weather"):
    (temp < 15) ? printf("Cold Weather"): 
    (temp <= 30) ? printf("normal weather"):
    (temp < 40) ? printf ("It is hot"):
    printf("Very hot weather");
}


int main() {
   temperature();
    return 0;
}
