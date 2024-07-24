//Runtime Error
#include"bits/stdc++.h"
using namespace std;
int a[100],b[100];
int main()
{
	int n;
	long long h=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		h+=a[i]*b[i];
	}
	cout<<h;
}
