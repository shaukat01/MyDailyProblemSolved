// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int key;
//     cout << "Enter the key: " << endl;
//     cin >> key;

//     cout << "Enter the message: " << endl;
//     string msg;
//     cin >> msg;

//     char ch;
//     for (int i = 0; msg[i] != '\0'; ++i)
//     {
//         ch = msg[i];
//         if (ch >= 'a' && ch <= 'z')
//         {
//             ch = (ch + key - 97) % 26 + 97;
//             msg[i] = ch;
//         }
//         else if (ch >= 'A' && ch <= 'Z')
//         {
//             ch = (ch + key - 65) % 26 + 65;
//             msg[i] = ch;
//         }
//     }
//     cout << "Encrypted message is:" << msg << endl;

//     for (int i = 0; msg[i] != '\0'; ++i)
//     {
//         ch = msg[i];
//         if (ch >= 'a' && ch <= 'z')
//         {
//             if()
//             ch = (ch - key - 97) % 26 + 97;

//             msg[i] = ch;
//         }
//         else if (ch >= 'A' && ch <= 'Z')
//         {
//             ch = (ch - key - 65) % 26 + 65;
//             msg[i] = ch;
//         }
//     }
//     cout << "Decrypted message is:" << msg << endl;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;


void encrypt(string p, int k)
{
	
	string ans = "";

	for(int i=0; i<p.length(); i++)
	{
		if(isupper(p[i]))
		{
			int num = p[i]-'A';
			num = (num+k)%26;
			char ch = char(num+'A');
			ans += ch;		
		}
		else
		{
			int num = p[i] - 'a';
			num = (num+k)%26;
			char ch = char(num+'a');
			ans += ch;
		}
	}

		cout<<"Encrypted message: "<<ans<<endl;

}

void decrypt(string c, int k)
{
	string ans = "";
	for(int i=0; i<c.length(); i++)
	{
		if(isupper(c[i]))
		{
			int num = c[i]-'A';
			num = (num-k);
			if(num<0)
			num += 26;
			num = num%26;
			char ch = char(num+'A');
			ans += ch;
		}
		else
		{
			int num = c[i]-'a';
			num = (num-k);
			if(num<0)
			num += 26;
			num = num%26;
			char ch = char(num+'a');
			ans += ch;
		}
	}

	cout<<"Decrypted message: "<<ans<<endl; 
}


int main()
{
	string p;
	cout<<"Enter message to encrypt: ";
	cin>>p;

	int k;
	cout<<"Enter key: ";
	cin>>k;

	encrypt(p,k);

	string c;
	cout<<"Enter message to decrypt: ";
	cin>>c;

	decrypt(c,k);

	return 0;


}