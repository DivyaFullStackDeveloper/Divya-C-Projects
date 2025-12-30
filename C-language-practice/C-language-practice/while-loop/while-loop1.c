#include<stdio.h>

void loopOne(){
    int i =1;
    while(i <= 10){
        printf("%d\n", i);
        i++;
    }
}

void loopTwo(){
    int i = 1;
    while(i <= 10){
        printf("Hello \n");
        i++;
    }
}

int main(){
    loopTwo();
    return 0;
}