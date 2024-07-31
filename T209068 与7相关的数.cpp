#include"bits/stdc++.h"
using namespace std;
int n,sw[100001][7],g1=1,pro[100001],g2=1,h;
bool added[100001];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int j=i;
		while(j)
		{
			sw[i][g1]=j%10;
			j/=10;
			if(sw[i][g1]==7&&!added[i])
			{
				pro[g2]=i;
				g2+=1;
				added[i]=true;
			}
			g1+=1;
		}
		g1=1;
	}
	for(int i=1;i<=g2;i++)
	{
		if(pro[i]%7==0)
		{
			h+=pro[i];
		}
	}
	cout<<h;
    return 0;
}
