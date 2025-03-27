#include <stdio.h>
int main(){
    int rows,i,j,k;
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
            if(i==0||i==rows-1){
                printf("*");
            }
            else{
                printf("*");
                for(k=0;k<rows-2;k++){
                    printf(" ");
                }
                printf("*");
            }
        }
        printf("\n");
    }
}