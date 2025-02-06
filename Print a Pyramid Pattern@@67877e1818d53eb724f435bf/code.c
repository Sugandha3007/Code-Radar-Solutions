#include<stdio.h>
int main(){
    int rows,i,j,k;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(k=0;k<=rows-i-1;k++){
            printf(" ");
        }  
        for(j=0;j<(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }


}