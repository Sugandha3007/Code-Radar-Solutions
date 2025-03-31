#include<stdio.h>
int frequency(int array[],int n){
    int freq[n];
    for(i=0;i<n;i++){
        freq[i]=-1;
    }
    for(i=0;i<n;i++){
        if(freq[-1]){
            int count=1;
        }
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                count++;
                freq[j]=0;
            }
            freq[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            printf("%d %d\n",array[i],freq[i]);
        }
    }
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    frequency(array,n);
}