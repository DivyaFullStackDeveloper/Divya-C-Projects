#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

// void titleCase(char str[]){
//     int i;
//     str[0] = toupper(str[0]);

//     for(i = 0; i < strlen(str); i++){
//         if(str[i-1] == ' '{
//           printf();
//         })
//     }
// };

void titleCase(char str[]) {
    if (strlen(str) == 0) return;

    str[0] = toupper(str[0]);

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
}

int main(){
    char experiments[3][3][50] = {
        {"acid test", "salt test"},
        {"flame test"},
        {"ph test", "iodine test", "nitrite test"}
    };

    // count total Experiment
    int count = 0, i, j;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(0 < strlen(experiments[i][j])){
              count++;
            };
        };
    };
    printf("Total experiment %d \n", count);

    // print only experiment containing th word "test"

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
           if(strstr(experiments[i][j], "test")){
            printf("%s \n", experiments[i][j]);
           }
           else{
            printf("- \n");
           };
        };
    };

    // Converrt all experiment nemes to the "Title Case"
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
          if(strlen(experiments[i][j] > 0)){
            titleCase(experiments[i][j]);
            printf("%s \n", experiments[i][j]);
          }
        }
    };
    // Find the day with maximum experiment
    // for(i = 0; i < 3; i++){
    //    for(j = 0; j < 3; j++){
    //     if(experiments[i][j] < )
    //    }
    // }
    return 0;
};

