int gitIBit(int n,int i){
    int mask=(1<<i);  //shift the bit to their corrosponding position
    int ans =n & mask;

    if(ans==0){
        return 0; 
    }
    else{
        return 1;
    }
}