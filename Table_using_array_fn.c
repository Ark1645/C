#include<stdio.h>
void storeTable(int ar[][10], int r, int c, int num){
    int i,j;
    for(j=0;j<c;j++){
        ar[r][j]=num*(j+1);
    }
}
void printTable(int ar[][10], int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int table[2][10];
    storeTable(table, 0, 10, 4);
    storeTable(table, 1, 10, 9);
    printTable(table, 2, 10);
    return 0;
}
