void countSetBits(int n,int i){
    int count=0;
    while(n!=0){
       int lastBit=n&1;
       if(lastBit){   //inside if always telling if not equal to zero
        count++;
        n=n>>1;
       }
    }
    return count;
}
