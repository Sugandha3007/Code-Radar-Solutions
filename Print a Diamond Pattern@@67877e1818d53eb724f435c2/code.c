#include<stdio.h>
int main(){
    int rows,i,j,k;
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<rows-i-1;j++){
            printf(" ");
        }
        for(k=0;k=2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<rows-1;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(k=2*i+1;k>=0;k--){
            printf("*");
        }
        printf("\n");
    }
}