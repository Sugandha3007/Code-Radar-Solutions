#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int count=0;
    int key;
    for(i=0;i<n;i++){
        if(array[i]==key){
            count++;
        }
    }
    printf("%d %d",array[i],count);
}