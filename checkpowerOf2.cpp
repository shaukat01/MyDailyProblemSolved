void checkPowerOf2(int n,int i){
    if(n&(n-1)==0){
        return true;
    }
    else{
        return false;
    }
}