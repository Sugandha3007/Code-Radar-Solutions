int isPrime(int num){
    for(t=1;t<num/2;t++){
        if(num%t){
            return 0;
        }
        else{
            return 1;
        }
    }

}