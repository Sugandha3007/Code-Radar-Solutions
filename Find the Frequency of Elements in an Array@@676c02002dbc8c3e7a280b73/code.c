#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int counted[n];
    for(i=0;i<n;i++){
        counted[n]=0;
    }
    for(i=0;i<n;i++){
        if(counted[i]=0){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                count++;
                counted[j]=1;
            }
        }
          printf("%d %d\n",array[i],count);

    }

}
