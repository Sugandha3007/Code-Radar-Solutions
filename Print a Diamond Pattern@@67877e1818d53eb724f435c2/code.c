#include<stdio.h>
int main(){
    int rows,i,j,k,p,q,r;
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<rows-i-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(p=rows-2;p>=0;p--){
        for(q=0;q<rows-p-1;q++){
            printf(" ");
        }
        for(r=0;r<2*p+1;r++){
            printf("*");
        }
        printf("\n");
    }
}