#include"bits/stdc++.h"
using namespace std;
int h,n;
int main()
{
	cin>>n;
	for(int i=0;i<=n;i+=2)
	{
		h+=i;
	}
	cout<<h;
}
