#include"bits/stdc++.h"
using namespace std;
int a[101][101],b[101][101],m,n,h;
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==b[i][j])
			{
				h+=1;
			}
		}
	}
	double p=(h*1.0)/(n*m)*100;
	printf("%.2f",p);
}
