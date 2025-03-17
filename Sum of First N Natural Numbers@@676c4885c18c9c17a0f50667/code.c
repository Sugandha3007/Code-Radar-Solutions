#include <stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    while(n>0){
        sum=sum+n;
        n--;
    }
    printf("%d",sum);
}