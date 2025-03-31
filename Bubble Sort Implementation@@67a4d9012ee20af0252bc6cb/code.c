int bubbleSort(int arr[n],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int printArray(int arr[n],int n){
    for(i=0;i<n;i++){
        printf("%d ",arr[j]);
    }
}