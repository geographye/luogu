#include"bits/stdc++.h"
using namespace std;
int t[1000],m,n,x[2000001];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>x[i];
		t[x[i]]+=1;
	}
	for(int i=1;i<=n;i++)
	{
		while(t[i]>0)
		{
			cout<<i<<" ";
			t[i]-=1;
		}
	}
}
