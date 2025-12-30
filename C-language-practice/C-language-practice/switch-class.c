#include<stdio.h>
#include<string.h>

// int main(){

//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     switch(num){
//         case 1:
//              printf("One");
//              break;
//         case 2:
//              printf("two");
//              break;
//         case 3:
//              printf("three");
//              break;
//         case 4:
//              printf("four");
//              break;
//         case 5:
//              printf("five");
//              break;
//         default:
//              printf("invalid number"); 
//     }
//     return 0;
// }


int greet(){

     int time;
     printf("Enter a time: ");
     scanf("%d", &time);

     switch(time){
          case (time < 12 && time > 0):
              printf("Good Morning");
              break;
          case (time < 18 && time > 12):
              printf("Good Afternoon");
              break;
          case (time < 24 && time > 18):
              printf("Good Evening");
              break;
          default:
              printf("Invalid"); 
     }
}

int main(){
     greet();
     return 0;
}