#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    if(rows%2==0){
        for(i=0;i<rows;i++){
            printf("*");
        }
    }
    else{
        printf(" * ");
    }
}