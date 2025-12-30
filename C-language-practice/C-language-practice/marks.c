#include <stdio.h>
#include<string.h>
#include<stdlib.h>

// int main() {
//     int marks[5];    
//     int i;
 
//     for(i = 0; i < 5; i++){
//         printf("Enter marks of subject %d: ", i + 1);
//         scanf("%d", &marks[i]);
//     }
 
//     printf("\n--- Marks of 5 Subjects ---\n");
//     for(i = 0; i < 5; i++){
//         printf("Subject %d = %d\n", i + 1, marks[i]);
//     }

//     return 0;
// }


// void  checkMarks(){
//     int marks, totalMarks = 0, percentage = 0, i = 0; 


//     while(i < 5){
//         printf("Enter marks : ");
//         scanf("%d", &marks);
 
//         totalMarks += marks;
//         i++;
//     }

//     percentage = totalMarks / 5;
//     printf("------------------------\n");
//     printf("Total marks: %d\n", totalMarks);
//     printf("Percentage: %d", percentage);

//     if(percentage >= 35){
//         printf("Result : Pass");
//     }else{
//         printf("Result: Fail");
//     }
// }

 

int factars() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("Factorial of %d = %lld", n, fact);
    return 0;
}



int main(){
    system("clear");
   factars();
    return 0;
}