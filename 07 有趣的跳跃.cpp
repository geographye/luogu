#include"bits/stdc++.h"
using namespace std;
long long a[3000],b[2999];
int main()
{
	int n;
	bool s=true;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==1)
	{
		s=true;
	}
	for(int i=0;i<n-1;i++)
	{
		b[i]=abs(a[i]-a[i+1]);
	}
	sort(b,b+n);
	for(int i=0;i<n-1;i++)
	{
		if(n!=1)
		{
			if(b[i]!=i)
		    {
			    s=false;
		    }
		}		
	}
	if(s)
	{
		cout<<"Jolly";
	}
	else
	{
		cout<<"Not jolly";
	}
}
