#include"bits/stdc++.h"
using namespace std;
int n,a[101][101],x,y;
bool flag=false;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		x=1;
		for(int j=2;j<=n;j++)
		{
			if(a[i][j]>a[i][x])
			{
				x=j;
			}
		}
		y=1;
		for(int j=2;j<=n;j++)
		{
			if(a[j][x]<a[y][x])
			{
				y=j;
			}
		}
		if(y==i)
		{
			flag=true;
			cout<<y<<" "<<x;
			break;
		}
	}
	if(!flag)
	{
		cout<<"not found";
	}
}
