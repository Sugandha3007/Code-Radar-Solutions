int fibonacciSeries(int n){
    int a=0,b=1,c;
    if(n==1){
        printf("%d ",a );
    }
    else{
        printf("%d ",a );
        printf("%d ",b);   
    }
    for(int i=3;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;

    }
}