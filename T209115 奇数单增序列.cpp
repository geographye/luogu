#include"bits/stdc++.h"
using namespace std;
int n,a[1001],b[1001];
bool first=true;
void sort_arr(int arr[],int ws)
{
	for(int i=1;i<=ws-1;i++)
	{
		for(int j=1;j<=ws-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i=1;i<=ws;i++)
	{
		b[i]=arr[i];
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort_arr(a,n);
	for(int i=1;i<=n;i++)
	{
		if(b[i]%2==1)
		{
			if(first)
			{
				cout<<b[i];
				first=false;
			}
			else
			{
				cout<<","<<b[i];
			}
		}
	}
}
