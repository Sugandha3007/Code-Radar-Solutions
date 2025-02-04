#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b==c){
        printf("Equilateral\n");
    }
    else if((a==b!=c)||(a!=b==c)||(a==c!=b)){
        printf("Isoceles\n");
    }
    else{
        printf("Scalene");
    }
}