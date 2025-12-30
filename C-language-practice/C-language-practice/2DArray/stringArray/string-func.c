#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int main(){
    system("clear");
    // string copy
    char str1[30], str2[] = "Hello Enjoy Programing!";
    stecpy(str1, srt2);
    printf("copied string: %s", str1);

    // str length
    printf("\n Length of string: %lu", strlen(str1));

    // string compare
    if(strcmp(str3, "Hello")== 0){
        printf("\n String are equal");
    }
    else{
        printf("\n String are not equal");
    }


    // string compare limited
    if(strcmp(str, "Hello",3) == 0){
       printf("\nstring are equal :");
    }else{
        printf("String are not equal \n");
    }

    // string lowercase
    printf("Lower case string :  ");
    for(int i = 0 i < strlen(str3); i++){
        printf|("%c", tolower(str3[i]));
    }
    printf("\n");
    // find character in string
    if(strchr(str3, "H")){
        printf("Character found \n");

    }else{
        printf("Character not found \n");

    }

    // find substring

    if(strstr(str1, "Enjoy")){
        printf("Substring found \n");
    }
    else{
        printf("Substring not found \n");
    }
    char str4[30] = "Good"
    char str5[30] = "Morning";
    printf(strcat("%s", str4, str5));

    // strcpy()
    // strncpy()
    // strlen()
    // strcmp()
    // strchr()
    // strstr()
    // strcat()

    // printf("%s", stricmp(str4, str5));
    strdup(str4, str6)
    return 0;

}