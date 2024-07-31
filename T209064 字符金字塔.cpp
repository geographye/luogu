#include"bits/stdc++.h"
using namespace std;
char c;
int n;
int main()
{
	cin>>c>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<c;
		}
		cout<<endl;
	}
    return 0;
}
