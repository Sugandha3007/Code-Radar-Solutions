int isPrime(int num){
    for(i=1;i<num/2;i++){
        if(num%i){
            return 0;
        }
        else{
            return 1;
        }
    }

}