#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    int num = 100;

    printf("Enter a string ");
    fgets(str,num,stdin);

    printf("%s", str);
    printf("Length of string is : %lu", strlen(str));
    
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a'){
            aCount++;
        }
        else if(str[i] == 'e'){
            eCount++;
        }
          else if(str[i] == 'i'){
            iCount++;
        }
          else if(str[i] == 'o'){
            oCount++;
        }
          else if(str[i] == 'u'){
            uCount++;
        }
        else{
            consonentCount++;
        }
    }
    return 0;
}