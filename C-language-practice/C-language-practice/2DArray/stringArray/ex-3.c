#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>


int main(){
    char studentList[3][4][50] = {
    {"Pranamya", "Ashish", "Ayush"},
    {"Vaishali", "Divya"},
    {"Sama", "Alfiya", "Ritika", "Shiwani"} 
    };

    // print Student List class-wise
    for(int i = 0; i<3; i++){
        printf("class %d \n", i+1);
        for(int j = 0; j < 4; j++){
            printf("%s \n",  studentList[i][j]);
        };
        printf("\n");
    };
    printf("------------------\n");

    // Count total Student
    int count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
           
         if( 0 < strlen(studentList[i][j])){
           count++;
         }
        }
    };
    printf("Total student is : %d\n", count);
    printf("------------------\n");

    // check if Ayush is present or not
 
    int a,b;
    char search[50];
    printf("Enter the name to search: ");
    scanf("%s", search);

    bool found = false;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j<4; j++){
            if(strcmp(search, studentList[i][j]) == 0){
                a = i;
                found = true;
                break;
            }
        }
    }
    if(found){
        printf("%s is present in class %d\n", search,a+1);
    }else{
        printf("%s is not present\n", search);
    }
    printf("------------------\n");

    // convert all names to upper
    char temp[50];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
        strcpy(temp, studentList[i][j]);
        for(int k = 0; k<strlen(temp); k++){
            temp[k] = toupper(temp[k]);
        }
        printf("%s \n", temp);
        }
    };
    return 0;
};



