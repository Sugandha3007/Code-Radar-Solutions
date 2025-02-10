#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%d",i);
            printf(" ");
        }
        printf("\n");
    }
}