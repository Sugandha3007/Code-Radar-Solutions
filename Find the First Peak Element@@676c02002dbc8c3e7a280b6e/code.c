#include<stdio.h>
int peak(int array[],int n){
    for(int i=0;i<n;i++){
        if(i==0){
            if(array[i]>array[i+1]){
                return array[i];
            }
        }
        else if(i==n-1){
            if(array[i]>array[i-1]){
                return array[i];
            }
        }
        else{
            if((array[i-1]<array[i])&&(array[i]>array[i+1])){
            return array[i];
        }
        }   
    }
    return -1;
}
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int result=peak(array,n);
    if(result!=-1){
        printf("%d",result);
    }
    else if(result==-1){
        printf("%d",result);
    }
}
