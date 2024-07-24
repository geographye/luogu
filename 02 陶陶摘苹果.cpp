#include"bits/stdc++.h"
using namespace std;
int main()
{
	int a[10],h=0,m;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<10;i++)
	{
		if(m+30>=a[i])
		{
			h+=1;
		}
	}
	cout<<h;
}
