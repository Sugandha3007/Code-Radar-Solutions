#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=rows;j<=1;j--){
            printf("%d",j);
            printf(" ");
        }
        printf("\n");
    }
}