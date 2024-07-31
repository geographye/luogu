#include"bits/stdc++.h"
using namespace std;
const int MAXN=100000+10;
struct numberarr{
	int value,index;
}a[MAXN];
bool cmp(numberarr x,numberarr y)
{
	return x.value<y.value;
}
int n,ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].value;
		a[i].index=i;
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++)
	{
		while(a[i].index!=i)
		{
			swap(a[i],a[a[i].index]);
			ans+=1;
		}
	}
	cout<<ans;
}
