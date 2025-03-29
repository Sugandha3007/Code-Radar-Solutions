#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]<=array[i+1]){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }

}
