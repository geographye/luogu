#include"bits/stdc++.h"
#define MAX 10001
using namespace std;
int start[MAX],b[MAX],a[MAX],g=1;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++)
	{
		if(a[i]>0&&a[i+1]>0)
		{
			b[g]+=1;
			if(start[g]==0)
			{
				start[g]=i;
			}
		}
		else
		{
			g+=1;
		}
	}
	int maxn=b[1];
	int max_start,max_final;
	bool flag=false;
	for(int i=2;i<=g;i++)
	{
		if(b[i]>maxn)
		{
			maxn=b[i];
			max_start=start[i];
			flag=true;
		}
	}
	if(!flag)
	{
		max_start=1;
	}
	max_final=max_start+maxn;
	cout<<max_start<<" "<<max_final;
}
