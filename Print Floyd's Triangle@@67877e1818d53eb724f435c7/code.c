#include <stdio.h>
int main(){
    int rows,i,j,num;
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        num=1
        for(j=1;j<=rows;j++){
            printf("%d",num);
            printf(" ");
            num++;
        }
         printf("\n");
    }
   
}