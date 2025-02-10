#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        for(j=1;j<=rows;j++){
            printf("%d",j);
            printf(" ");
        }
        printf("\n");
    }
}