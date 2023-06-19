#include<bits/stdc++.h>
using namespace std;

int sender(){
    cout<<"Enter the byte stream to be send"<<endl;
    string s; cin>>s;
    int ct=0;
    for(int i=0;i<s.size();i++) if(s[i]=='1') ct++;
    int checkSum = ~ct;
    cout<<"Checksum is: "<<checkSum<<endl;
    return checkSum;
}

void receiver(){
    cout<<"Enter the byte stream received"<<endl;
    string s; cin>>s;
    int ct=0;
    for(int i=0;i<s.size();i++) if(s[i]=='1') ct++;
    cout<<"Enter the checksum:"<<endl;
    int checkSum; cin>>checkSum;
    if(~(ct+checkSum)==0){
        cout<<"The received data is correct"<<endl;
    }
    else{
        cout<<"The received data is incorrect"<<endl;
    }
}

int main(){
    sender();
    receiver();
    return 0;
}