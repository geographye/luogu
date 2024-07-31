#include"bits/stdc++.h"
using namespace std;
int start,final,rn[500],h=0;
int main()
{
	int g=0;
	cin>>start>>final;
	for(int i=start+1;i<final;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			rn[g]=i;
			g+=1;
		}
	}
	for(int i=0;i<=g;i++)
	{
		h+=rn[i];
	}
	cout<<h;
}
