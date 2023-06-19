#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cout<<"Enter the bit stream to send"<<endl;
	cin>>s;

	int cnt1 = 0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='1')
			cnt1++;
	}

	cout<<"Enter 1 for odd parity and 2 for even parity"<<endl;
	int ch;
	cin>>ch;
	
	if(ch==1)
	{
		if(cnt1%2!=0)
		{
			//odd parity hai
			s += '0';
			cout<<"Data sent: "<<s<<endl;	
		}
		else
		{
			//odd parity nhi hai
			s += '1';
			cout<<"Data sent: "<<s<<endl;

		}
	}
	else
	{	
		if(cnt1%2==0)
		{
			//even parity hai
			s += '0';
			cout<<"Data sent: "<<s<<endl;
		}
		else
		{
			//odd parity hai
			s += '1';
			cout<<"Data sent: "<<endl;

		}

	}

	return 0;
}
