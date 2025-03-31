#include<stdio.h>
int peak(int array[],int n){
    for(int i=1;i<=n;i++){
        if(i<n){
            if((array[i-1]<array[i])&&(array[i]>array[i+1])){
            return array[i];
            break;
        }
        }
        else if(i=n){
            if(array[i]>array[i-1]){
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
    if(result!=0){
        printf("%d",result);
    }
    else if(result==-1){
        printf("%d",result);
    }
}
