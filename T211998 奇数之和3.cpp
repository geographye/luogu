#include"bits/stdc++.h"
using namespace std;
int m,n,h;
int main()
{
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(i%2==1)
		{
			h+=i;
		}
	}
	cout<<h;
}
