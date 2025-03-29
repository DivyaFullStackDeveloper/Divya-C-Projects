# include <stdio.h>

int main(){
    int age;
    printf("Enter your age");
    scanf("%d", & age);
    if(age >= 18){
    printf("Your eligible for vote .\n");
    }else{
      printf("Your not Eligible for vote .\n");
    }
    return 0;
}
