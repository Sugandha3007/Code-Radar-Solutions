int isPrime(int num){
    for(t=2;t<+num/2;t++){
        if(num%t==0){
            return 0;
        }
    }
    return 1;
}