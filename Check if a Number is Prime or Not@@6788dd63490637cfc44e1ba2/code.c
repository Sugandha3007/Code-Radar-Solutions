#include <stdio.h>
int main(){
    int a,i=2,prime=0;
    scanf("%d",&a);
    while(i<=n/2){
        if(n%i==0){
            prime=1;
            break;
        }
        i=i+1;
    }
    if(prime==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    
}