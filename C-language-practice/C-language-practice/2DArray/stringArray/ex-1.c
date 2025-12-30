#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>

int main(){
    system("clear");

    char announcement[3][2][50] = {
        {"Train delayed","Platform change"},
        {"Train arriving","empty"},
        {"Train cancelled","Maintaince work"}
    };
    // Print announcement platform-wise
    for(int i = 0; i < 3; i++){
        printf("platform %d : ", i+1);
        for(int j = 0; j < 2; j++){
            printf("%s ", announcement[i][j]);
        }
        printf("\n");
    };
    printf("----------------------\n");

    // Search "cancelled"
    char search[50];
    bool found = false;

    printf("Enter the string to search: ");
    scanf("%s", search);

    for (int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
           if(strstr(announcement[i][j], search)){
            found = true;
            break;
           }

        // char temp[50];
        // strcpy(temp, announcement[i][j]);
        // if(strstr(temp, search)){
        //     found = true;
        //     break;
        // }
        }
    }
    if (found){
        printf("%s found\n", search);
    }else{
        printf("%s not found\n", search);
    }
    printf("--------------------------\n");

    
    // count total announcement
    int count = 0;
    for (int i = 0; i <3; i++){
         for(int j = 0; j < 2; j++){
         count++;
         }
    };
    printf("Total announcement :%d", count);

    printf("-----------------------------\n");


    // 

    return 0;
};