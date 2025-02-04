#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a==b)&&(a==c)){
        printf("Equilateral\n");
    }
    else if((a==b)||(b==c)||(a==c)){
        printf("Isoceles\n");
    }
    else{
        printf("Scalene\n");
    }
}