#include<stdio.h>
int main(){
    int rows,i,j;
    char alphabet;
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        alphabet='A';
        for(j=rows;j>=1;j--){
            printf("%c ",alphabet);
            alphabet++;
        }
        printf("\n");
    }
}