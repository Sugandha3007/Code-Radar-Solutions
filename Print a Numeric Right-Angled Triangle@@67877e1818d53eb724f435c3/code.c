#include <stdio.h>
int main(){
    int rows,i,j;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
         printf("\n");
    }
   
}