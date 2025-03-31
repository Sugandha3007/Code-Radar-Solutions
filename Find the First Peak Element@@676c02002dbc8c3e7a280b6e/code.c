#include<stdio.h>
int peak(int array[],int n){
    for(int i=1;i<=n;i++){
        if((array[i-1]<array[i])||(array[i]>array[i+1])){
            return array[i];
            break;
        }
    }
    return 0;
}
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int result=peak(array,n);
    if(result!=0){
        printf("%d",result);
    }
}
