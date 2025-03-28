#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int array[n],freq[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[n]);
        freq[n]=-1;
    }
    
    for(i=0;i<n;i++){
        int frequency=0;
        for(j=0;j<n;j++){
            if(array[i]==array[j]){
            frequency++;
            freq[j]=0;
        }
    }
    if(freq[i]!=0){
        freq[i]=frequency;
    }
    }
    
    printf("%d %d",array[i],frequency);
}