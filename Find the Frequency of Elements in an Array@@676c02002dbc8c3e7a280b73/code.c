#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[n]);
    }
    int frequency=0;
    for(j=0;j<n;j++){
        if(array[i]==array[j]){
            frequncy++;
        }
    }
    printf("%d %d",array[i],frequency);
}