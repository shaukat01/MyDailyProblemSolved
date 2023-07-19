void clearIbit(int n,int i){
    int mask=~(1<<i);
    int ans=n&mask;
    cout<<"After clearing the bit is: "<<ans;
}