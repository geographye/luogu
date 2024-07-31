#include"bits/stdc++.h"
using namespace std;
string a[101],s;
int n=1;
int main()
{
	while(cin>>s)
	{
		a[n]=s;
		n+=1;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	cout<<a[1]<<endl;
	for(int i=2;i<=n;i++)
	{
		if(a[i]!=a[i-1])
		{
			cout<<a[i]<<endl;
		}
	}
}
