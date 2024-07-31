#include"bits/stdc++.h"
using namespace std;
int g=1;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			g+=1;
		}
	}
	cout<<g-1;
}
