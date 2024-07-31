#include"bits/stdc++.h"
using namespace std;
int a,b,s;
int main()
{
	int sn=0;
	cin>>s;
	for(int i=s;i>=sqrt(s);i--)
	{
		for(int j=1;j<=sqrt(s);j++)
		{
			if(i*j==s)
			{
				sn+=1;
			}
		}
	}
	cout<<sn;
}
