#include"bits/stdc++.h"
using namespace std;
int a[100],n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0],min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max<<" "<<min;
}
