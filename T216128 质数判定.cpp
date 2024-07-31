#include"bits/stdc++.h"
using namespace std;
int x;
bool flag=true;
int main()
{
	cin>>x;
	if(x==1)
	{
		flag=false;
	}
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			flag=false;
			break;
		}
	}
	if(flag)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}
