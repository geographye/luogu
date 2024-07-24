#include"bits/stdc++.h"
using namespace std;
int main()
{
	float a[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},h=0.0;
	int b[10];
	for(int i=0;i<10;i++)
	{
		cin>>b[i];
		h+=a[i]*b[i];
	}
	printf("%.1f",h);
}
