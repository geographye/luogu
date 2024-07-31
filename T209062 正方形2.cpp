#include"bits/stdc++.h"
using namespace std;
char c;
int n;
int main()
{
	cin>>c>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||i==n-1||i!=0&&i!=n-1&&j==0||i!=0&&i!=n-1&&j==n-1)
			{
				cout<<c;
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
