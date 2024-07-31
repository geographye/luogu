#include"bits/stdc++.h"
using namespace std;
double charging(int sms_length)
{
	int h=1;
	while(sms_length>70)
	{
		sms_length-=70;
		h+=1;
	}
	return h*0.1;
}
int a;
int main()
{
	int n;
	double m,h1=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		m=charging(a);
		h1+=m;
	}
	printf("%.1f",h1);
}
