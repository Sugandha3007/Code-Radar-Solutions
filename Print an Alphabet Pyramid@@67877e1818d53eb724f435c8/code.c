#include <stdio.h>
int main(){
    int rows,i,j;
    char alphabet;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        alphabet='A';
        for(j=1;j<=i;j++){
            printf("%c",alphabet);
            printf(" ");
            alphabet++;
        }
        printf("\n");
    }
}