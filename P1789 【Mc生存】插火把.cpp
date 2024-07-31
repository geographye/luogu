#include"bits/stdc++.h"
using namespace std;
int n,m,k,x[26],y[26],o[6],p[6],h;
bool lighted[101][101];
void torch(int x,int y)
{
	for(int i=x-2;i<=x+2;i++)
	{
		if(i>=1&&i<=n)
		{
			lighted[i][y]=true;
		}
	}
	for(int i=y-2;i<=y+2;i++)
	{
		if(i>=1&&i<=n) lighted[x][i]=true;
	}
	if(x+1<=n&&y+1<=n) lighted[x+1][y+1]=true;
	if(x+1<=n&&y-1>=1) lighted[x+1][y-1]=true;
	if(x-1>=1&&y+1<=n) lighted[x-1][y+1]=true;
	if(x-1>=1&&y-1>=1) lighted[x-1][y-1]=true;
}
void fluorite(int x,int y)
{
	for(int i=x-2;i<=x+2;i++)
	{
		for(int j=y-2;j<=y+2;j++)
		{
			if(i>=1&&i<=n&&j>=1&&j<=n) lighted[i][j]=true;
		}
	}
}
int main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++)
	{
		cin>>x[i]>>y[i];
	}
	if(k!=0)
	{
		for(int i=1;i<=k;i++)
		{
			cin>>o[i]>>p[i];
		}
	}
	for(int i=1;i<=m;i++)
	{
		torch(x[i],y[i]);
	}
	if(k!=0)
	{
		for(int i=1;i<=k;i++)
		{
			fluorite(o[i],p[i]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(!lighted[i][j])
			{
				h+=1;
			}
		}
	}
	cout<<h;
}
