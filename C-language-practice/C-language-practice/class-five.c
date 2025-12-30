#include<stdio.h>
#include<string.h>
// int compScore(){

//     int  num1,  num2;

// printf("Enter first score");
// scanf("%d", &num1);

// printf("Enter second score");
// scanf("%d", &num2);

// if(num1 > num2){
//     printf("num1 is grater than num2");
// }
// else if(num1 < num2){
//     printf("num2 is grater than num1");
// }
// else{
//     printf("Draw");
// }
// return 0;
// }



// login 

// int login(){
//     char username[50];
//     char email[50];
//     char password[20];

//     char userUsername[50];
//     char userPassword[20];

//     printf("Enter usernae");
//     scanf("%s", userUsername);
//     printf("Enter password");
//     scanf("%s", userPassword);

//     if(strcmp(username, userUsername) == 0 || strcmp(userUsername, email) == 0 && strcmp(password, userPassword) == 0){
//         printf("Login successful");
//     }else{
//         printf("Login successful");
//     }
//     return 0;
// }


int getDiscunt(){
    int totalAmount;
    printf("Enter total amount");
    scanf("%d", &totalAmount);
    if(totalAmount >= 50){
        printf("Discount od applied");
    }
    else{
        printf("No discount applied");
    }
    return 0;
}


int main(){
   getDiscunt();
    return 0;
}