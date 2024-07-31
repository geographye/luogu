#include"bits/stdc++.h"
using namespace std;
int n,m,a[101],b[101],g=1,added[1001];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(!added[a[i]])
		{
			added[a[i]]+=1;
			g+=1;
		}
	}
	g-=1;
	cout<<g<<endl;
	for(int i=1;i<=1000;i++)
	{
		if(added[i]==1)
		{
			cout<<i<<" ";
		}
	}
}
