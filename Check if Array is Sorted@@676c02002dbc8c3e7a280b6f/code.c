#include<stdio.h>
int sorted(int array[],int n){
        for(int i=0;i<n;i++){
        if(array[i]<=array[i+1]){
            return 0;
        }
    }
    return 1;
    }
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d ",&array[i]);
    }
    int sort=sorted(array,n);
    if(sort==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}

    