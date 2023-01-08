// 4.(a) Search on what a "nested loop" is & and print this pattern using it.
/* *****
   *****
   *****
   ***** */
#include<stdio.h>
int main(){
    for(int i=1;i<5;i++){
        for(int j=1;j<=5;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}