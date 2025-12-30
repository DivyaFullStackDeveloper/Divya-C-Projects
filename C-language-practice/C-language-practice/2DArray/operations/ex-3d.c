#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    int array[2][2][5] = {
     {
        {1,2,3,4,5,},
        {6,7,8,9,10}
    },
    {
        {11,12,13,14,15},
        {16,17,18,19,20}
    }
  };

  for(int a = 0; a < 2; a++){
    for(int b = 0; b < 2; b++){
        for(int c = 0; c < 5; c++){
            printf("%d", array[a][b][c]);
        }
        printf("\n");
    }
    printf("\n");
  }
  return 0;
}