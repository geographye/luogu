#include"bits/stdc++.h"
using namespace std;
int a[100],n,h;
float p;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		h+=a[i];
	}
	p=h*1.0/n;
	printf("%.2f",p);
}
