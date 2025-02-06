#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<i;i+2){
            printf(" ");
            printf("*");
        }
    }

}
