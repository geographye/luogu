//CEÇëÓÃC++11
#include"bits/stdc++.h"
const int MAXN=10000+10;
using namespace std;
int n,i,j;
int a[MAXN][MAXN];
int main()
{
	cin>>n>>i>>j;
	for(int x=1;x<=n;x++)
	{
		cout<<"("<<i<<","<<x<<") ";
	}
	cout<<endl;
	for(int x=1;x<=n;x++)
	{
		cout<<"("<<x<<","<<j<<") ";
	}
	cout<<endl;
	int k1=i-j;
	for(int x=1;x<=n;x++)
	{
		if(x-k1>=1&&x-k1<=n)
		{
			cout<<"("<<x<<","<<x-k1<<") ";
		}
	}
	cout<<endl;
	int k2=i+j;
	for(int x=n;x>=1;x--)
	{
		if(k2-x>=1&&k2-x<=n)
		{
			cout<<"("<<x<<","<<k2-x<<") ";
		}
	}
}
