#include<bits/stdc++.h>
using namespace std;


long long int encryptchar(char ch, long long int e, long long int n)
{
    long long int temp = 1;
    long long int ee = e;
    long long int num = (long long int)(ch-'a');
    while(e--)
    {
        temp = temp*num;
        temp = temp%n;
    }

    return temp;
}

char decryptchar(long long int num, long long int d, long long int n)
{
    long long int temp = 1;
    long long int dd = d;
    while(dd--)
    {
        temp = temp*num;
        temp = temp%n;
    }

    char ch = (char) (temp+'a');
    return ch;
}


vector<long long int> encrypt(string msg, long long int e, long long int n)
{

    vector<long long int> ans;

    for(long long int i=0; i<msg.size(); i++)
    {
        ans.push_back((long long int)encryptchar(msg[i],e,n));
    }

    return ans;
}

string decrypt(vector<long long int> c, long long int d, long long int n)
{
    string ans ="";
    for(long long int i=0; i<c.size(); i++)
    {
        ans.push_back((char)decryptchar(c[i],d,n));
    }
    return ans;
}


int main()
{
    long long int p,q;
    cout<<"Enter two prime numbers: "<<endl;
    cin>>p>>q;

    long long int n = p*q;
    long long int phi = (p-1)*(q-1);

    //public key
    long long int e=2;
    while(true)
    {
        if(__gcd(e,phi)==1)
        break;

        e++;
    }

    cout<<"Public key e: "<<e<<endl;

    //private key
    long long int d =2;
    while(true)
    {
        if((e*d)%phi==1)
        break;

        d++;
    }

    cout<<"Private key d: "<<d<<endl;

    cout<<"Enter message"<<endl;
    string msg;
    cin>>msg;


    vector<long long int> c = encrypt(msg,e,n);
    cout<<"Encrypted message: ";
    for(long long int i=0; i<c.size(); i++)
    cout<<c[i]<<",";
    cout<<endl;

    string s = decrypt(c,d,n);
    cout<<"Decrypted message: "<<s<<endl;


    return 0;
}