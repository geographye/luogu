#include"bits/stdc++.h"
using namespace std;
int x,y,z,n,m,c=0;
int main()
{
	cin>>x>>y>>z>>n>>m;
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=m-i;j++)
		{
			int k=m-i-j;
			if(i*x+j*y+k/z==n&&k%z==0)
			{
				c+=1;
			}
		}
	}
	cout<<c;
 } 
