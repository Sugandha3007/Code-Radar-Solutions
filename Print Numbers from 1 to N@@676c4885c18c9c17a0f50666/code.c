#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    while(n>0){
        printf("%d",n);
        n--;
    }
}