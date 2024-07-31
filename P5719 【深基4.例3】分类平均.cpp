#include"bits/stdc++.h"
using namespace std;
int n,k,g1,g2;
double p1,p2,h1,h2;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		if(i%k==0)
		{
			h1+=i*1.0;
			g1+=1;
		}
		else
		{
			h2+=i*1.0;
			g2+=1;
		}
	}
	p1=h1/g1; p2=h2/g2;
	printf("%.1f %.1f",p1,p2);
}
