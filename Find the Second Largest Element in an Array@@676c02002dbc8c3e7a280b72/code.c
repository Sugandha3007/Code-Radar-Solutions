#include<stdio.h>
int main(){
    int n,i,largest,second;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    if(array[0]>array[1]){
        largest=array[0];
        second=array[1];
    }
    else{
        second=array[0];
        largest=array[1];
    }
    for(i=0;i<n;i++){
        if(array[i]>largest){
            second=largest;
            largest=array[i];
        }
        else if(array[i]>second && array[i]!>largest){
            second=array[i];
        }
        
    }
    printf("%d",second);
}