#include <stdio.h>

int main() {
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&array[i]);
    }
    int maximum=array[0];
    int minimum=array[0];
    for(i=0;i<n;i++){
        if(array[i]>maximum){
            maximum=array[i];
        }
        if(array[i]<minimum){
            minimum=array[i];
        }
    }
    printf("%d\n",maximum);
    printf("%d",minimum);
    
}