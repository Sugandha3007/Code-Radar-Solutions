#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int sort=sorted(int array[n]);
    if(sort==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}
    int sorted(int array[n]){
        for(int i=0;i<n;i++){
        if(array[i]<=array[i+1]){
            return 0;
        }
        else{
            return 1;
        }
    }
    }
    

