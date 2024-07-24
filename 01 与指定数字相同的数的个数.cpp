#include"bits/stdc++.h"
using namespace std;
int a[100];
int main()
{
	int n,m,h=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			h+=1;
		}
	}
	cout<<h;
}
