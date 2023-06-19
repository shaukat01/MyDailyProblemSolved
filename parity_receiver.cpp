#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cout<<"Enter the data stream received"<<endl;
	cin>>s;

	int cnt1 = 0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='1')
			cnt1++;
	}


	cout<<"Enter 1 for checking odd parity sent data and 2 for checking even parity sent data"<<endl;
	int ch;
	cin>>ch;

	if(ch==1)
	{
		if(cnt1%2!=0)
		{
			cout<<"Data received is correct"<<endl;
		}	
		{
			cout<<"Data received is incorrect"<<endl;
		}
	}
	else
	{
		if(cnt1%2==0)
		{
			cout<<"Data received is correct"<<endl;
		}
		else
		{
			cout<<"Data received is incorrect"<<endl;
		}
	}

	return 0;

}
