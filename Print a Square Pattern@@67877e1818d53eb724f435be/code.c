#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    for(i=1;i<rows+1;i++){
        printf("*");
        printf(" ");
        for(j=0;j<i;){
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}