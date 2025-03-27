#include <stdio.h>
int main(){
    int rows,i,j,num;
    scanf("%d",&rows);
    num=1;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d",num);
            printf(" ");
            num++;
        }
         printf("\n");
    }  
}
