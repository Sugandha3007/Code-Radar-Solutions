#include<stdio.h>
int frequency(int array[],int n){
    int count=0,j;
    for(int i=0,j=0;i<n;i++,j++){
        if(array[j]=array[i]){
            return count++;
        }
        else if(array[j]!=array[i]){
            return count++;
        }
        else{
            return count;
        }  
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("%d %d",i+1,frequency(array,n));
}