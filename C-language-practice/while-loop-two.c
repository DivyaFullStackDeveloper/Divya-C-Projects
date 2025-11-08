#include<stdio.h>
#include<string.h>


// void a(){
//     int i = 1;
//     char j[4];
//     sprintf(j, "%d", i);
//     strcat(j, "+");
//     printf("%s", j);

// }


// print pattern like 
// 1
// 2 2
// 3 3 3


// void patternOne(){
//    int i = 1;
//    char row[20] = "";

//    while(i <= 5){
//     int j = 1;
//     row[0]='\0';
    

//    while(j <= i){
//     char a[50] = "";               
//     sprintf(a, "%d", i);   
//     sprintf(a, "%d", i);
//     strcat(row, a);
//     strcat(row, " ");
//     j++;
//    }
//    printf("%s \n", row);
//    i++;
//  }
// }


// print pattern like
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3


void patternOne(){
   int i = 5;
   char row[20] = "";

   while(i >= 1){
    int j = 5;
    row[0]='\0';
    

   while(j >= i){
    char a[50] = "";               
    sprintf(a, "%d", i);   
    sprintf(a, "%d", i);
    strcat(row, a);
    strcat(row, " ");
    j++;
   }
   printf("%s \n", row);
   i--;
 }
}

int main(){
    patternOne();
    return 0;
}