#include"bits/stdc++.h"
using namespace std;
bool b[10000];
int main()
{
	int l,m,h=0,start[100],final[100];
	cin>>l>>m;
	for(int i=0;i<m;i++)
	{
		cin>>start[i]>>final[i];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=start[i];j<=final[i];j++)
		{
			if(!b[j])
			{
				h+=1;
				b[j]=true;
			}
		}
	}
	cout<<l+1-h;
}
