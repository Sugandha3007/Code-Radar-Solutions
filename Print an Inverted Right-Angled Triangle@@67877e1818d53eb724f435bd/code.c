#include <stdio.h>
int main(){
    int rows,i;
    scanf("%d",&rows);
    for(i=rows,i>0,i--){
        printf("*"*i);
    }
}