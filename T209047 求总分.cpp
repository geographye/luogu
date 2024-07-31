#include"bits/stdc++.h"
using namespace std;
int a[100],n,h;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		h+=a[i];
	}
	cout<<h;
}
