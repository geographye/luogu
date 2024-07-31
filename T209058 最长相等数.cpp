#include"bits/stdc++.h"
using namespace std;
int a[1000],n,b[1000],g;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			b[g]+=1;
		}
		else
		{
			g+=1;
		}
	}
	int max=b[0];
	for(int i=1;i<=g;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	cout<<max+1;
}
