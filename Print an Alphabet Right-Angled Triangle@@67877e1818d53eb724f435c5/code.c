#include <stdio.h>
int main(){
    int rows,i,j;
    char alphabet;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            alphabet='A';
            printf("%c",alphabet);
            printf(" ");
            alphabet++;
        }
        printf("\n");
    }
}