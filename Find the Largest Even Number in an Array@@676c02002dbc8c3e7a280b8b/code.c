#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int maximum=-1;
    int found_even=0;
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            if(!found_even || array[i]>maximum){
                maximum=array[i];
                found_even=1;
            }
        }
        }
        printf("%d",maximum);
    }
    
