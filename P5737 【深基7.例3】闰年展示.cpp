#include"bits/stdc++.h"
using namespace std;
int h=0,a[400];
void rn(int start,int final)
{
	for(int i=start;i<=final;i++)
	{
		if(i%4==0&&i%100!=0||i%100==0&&i%400==0)
		{
			h++;
			a[h]=i;
		}
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	rn(x,y);
	cout<<h<<endl;
	for(int i=1;i<=h;i++)
	{
		cout<<a[i]<<" ";
	}
}
