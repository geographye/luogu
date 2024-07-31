#include"bits/stdc++.h"
using namespace std;
int ys[12],z,s;
bool flag=true;
int main()
{
	int x;
	for(int i=0;i<12;i++)
	{
		cin>>ys[i];
	}
	for(int i=0;i<12;i++)
	{
		if(s+300>=ys[i])
		{
			x=((s+300-ys[i])/100)*100;
			z+=x;
			s=s+300-x-ys[i];
		}
		else
		{
			cout<<"-"<<i+1;
			flag=false;
			break;
		}
	}
	if(flag)
	{
		z*=1.2;
		cout<<s+z;
	}
}
