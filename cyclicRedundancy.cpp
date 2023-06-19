#include<bits/stdc++.h>
using namespace std;

string xorr(string temp,string geneZero){
    string ans="";
    for(int i=0;i<temp.size();i++){
        if(temp[i]==geneZero[i]) ans.push_back('0');
        else ans.push_back('1');
    }
    return ans;
}

string crc(string s,string gen){
    string temp=s.substr(0,gen.size());
    string zero="";
    for(int i=0;i<temp.size();i++) zero+='0';
    int ptr=gen.size();
    for(int i=0;i<(s.size()-gen.size()+1);i++){
        if(temp[0]=='1'){
            temp=xorr(temp,gen);
        }
        else{
            temp=xorr(temp,zero);
        }
        temp=temp.substr(1);
        temp.push_back(s[ptr]);
        ptr++;
    }
    return temp;
}

void sender(string s,string gen){
    string old=s;
    for(int i=0;i<(gen.size()-1);i++) s+='0';
    string rem=crc(s,gen);
    cout<<"CRC : "<<rem<<endl;
    cout<<"The crc string : "<<old+rem<<endl;
}   

void receiver(string s,string gen){
    string rem = crc(s,gen);
    for(int i=0;i<rem.size();i++){
        if(rem[i]=='1'){
            cout<<"The byte stream is not correct"<<endl;
            return;
        }
    }
    cout<<"The sent byte stream is correct"<<endl;
}

int main(){
    cout<<"Enter byte stream to be send"<<endl;
    string s; cin>>s;
    cout<<"Enter generator"<<endl;
    string gen; cin>>gen;
    sender(s,gen);
    cout<<"Enter the received byte stream: "<<endl;
    cin>>s;
    receiver(s,gen);
    return 0;
}