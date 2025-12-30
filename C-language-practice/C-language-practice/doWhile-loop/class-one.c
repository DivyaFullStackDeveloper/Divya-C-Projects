#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void loopOne(){
    int i = 1;
    do{
        printf("%d\n", i);
        i++;

    }while(i <= 200);
}

void loopTwo(){
    int i = 1;
    do{
        int j = 1;
        do{
            printf("%d", j);
            j++;                                                                                                                                                       
        }while( j <= 2);
        printf("%d\n", i);  
        i++;
     
    }while(i <= 5);
}


void loopThree(){
    int i = 1;
    do{
        int j = 1;
        while( j <= 5){
        printf("* \n");
        j++;
        }
          printf("%d\n", i);
        i++;
        }while(i <= 5);
}


 
void loopFour(){
    int i = 1;
   char row[20] = ""; 
    do{
        int j = 1;
        while( j <= 5){
            
        strcpy(row, "*");
        j++;
        }
          printf("%s\n", row);
        i++;
        }while(i <= 5);
}

int main(){
    system("clear");
  loopFour();
    return 0;
}

