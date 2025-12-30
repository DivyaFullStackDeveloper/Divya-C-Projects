// #include <stdio.h>

// int main(){
//     char name[20];
//     int rollNo;
//     int marks;
//     printf("Enter your name: ");
//     scanf("%s", name);

//     printf("Enter your rooll no: ");
//     scanf("%d", &rollNo);

//     printf("Enter your marks: ");
//     scanf("%d", &marks);

//     return 0;
// }
 

 



// #include <stdio.h>
// #include <string.h>

// void sayHello(){
//     printf("Hello");
// }

// int main(){
//     int userAge;
//     if(userAge >= 80){
//         char haveLicense[10];
//         char ans[5] = "yes";
//         if(haveLicense == "yes"){
//          printf("Do you have a licensea : (yes/No) ");
//          scanf("%s", haveLicense);
//          if(strcmp(haveLicense, ans) == 0){
//            printf("you can drive");
//            scanf("%s", ans);
//          }else{
//             printf("you can't drive")
//          }
//         }else{
//     printf("you can't drive");
// }
//     }
// }       



 
//  #include <stdio.h>
// #include <string.h>

// void sayHello() {
//     printf("Hello\n");
// }

// int main() {
//     int userAge;
//     char haveLicense[10];

   
//     printf("Enter your age: ");
//     scanf("%d", &userAge);

  
//     if (userAge >= 80) {
//         printf("Do you have a license? (yes/no): ");
//         scanf("%s", haveLicense);

 
//         if (strcmp(haveLicense, "yes") == 0) {
//             printf("You can drive.\n");
//         } else {
//             printf("You can't drive.\n");
//         }
//     } else {
//         printf("You are younger than  ");
//         sayHello();  
//     }

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// void sayHello() {
//     printf("Hello\n");
// }

// int main() {
//     int userAge;
//     char haveLicense[10];

//     printf("Enter your age: ");
//     scanf("%d", &userAge);

//     if (userAge >= 80) {
//         printf("Do you have a license? (yes/no): ");
//         scanf("%s", haveLicense);

//         if (strcmp(haveLicense, "yes") == 0) {
//             printf("You can drive.\n");
//         } else {
//             printf("You can't drive.\n");
//         }
//     } else {
//         printf("Your age .\n");
//         sayHello();
//     }

//     return 0;
// }



// // ask person that is he/she above if yes then ask for liences, if has lisence then can drive, else can not drive
 
// #include <stdio.h>
// #include <string.h>
 
// int sayHello() {
//     printf("\nHello, its sayHello finction");
//     return 100;
// }
 
// int main() {
 
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
 
//     char lisence[10];
 
//     if (age >= 18)
//     {
//         printf("Do you have lisence ans in yes/no: ");
//         scanf("%s", lisence);
//         char ans[3] = "yes";
 
//         if (strcmp(ans, lisence) == 0)
//         {
//             printf("You can drive.");
//         }
//         else
//         {
//             printf("You can not drive");
//         };
//     }
//     else
//     {
//         printf("you can not drive.");
//     }
 
//     sayHello();
// }

// // ask person that is he/she above if yes then ask for liences, if has lisence then can drive, else can not drive
 
// #include <stdio.h>
// #include <string.h>
 
// int sayHello() {
//     printf("\nHello, its sayHello finction");
//     return 100;
// }
 
// int main() {
 
//     int age;
//     printf("Tell your age: ");
//     scanf("%d", &age);
 
//     char lisence[10];
 
//     if (age >= 18)
//     {
//         printf("Do you have lisence ans in yes/no: ");
//         scanf("%s", lisence);
//         char ans[3] = "yes";
 
//         if (strcmp(ans, lisence) == 0)
//         {
//             printf("You can drive.");
//         }
//         else
//         {
//             printf("You can not drive");
//         };
//     }
//     else
//     {
//         printf("you can not drive.");
//     }
 
//     sayHello();
// }


//********  */ swap number

// #include<stdio.h>

// int x = 10;
// int y = 20;

// void swapValue(){
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main(){
//     printf("x = %d \ny = %d \n", x, y);
//     swapValue();
//     printf("x = %d \ny =%d \n", x, y);
//     return 0;
// }


// ******** swap number
// #include <stdio.h>
 
// int x = 20;
// int y = 100;
 
// void swap() {
//     int temp = x;
//     x = y;
//     y =temp;
// }
 
// int main() {
//     printf("%d %d", x, y);
//     swap();
//     printf("\n%d %d", x, y);
// }
 