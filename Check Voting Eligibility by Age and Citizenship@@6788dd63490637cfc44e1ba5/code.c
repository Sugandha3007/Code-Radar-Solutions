#include <stdio.h>
int main(){
    int a,status;
    scanf("%d",&a);
    scanf("%d",&status);
    if(status==1){
        if(a>=18){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
    }
    else{
        printf("Not Eligible");
    }
}