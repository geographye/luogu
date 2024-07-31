#include"bits/stdc++.h"
using namespace std;
float cd,a;
int n;
int main()
{
	cin>>a>>n;
	cd=a*1.0;
	for(int i=1;i<n;i++)
	{
		a*=0.95;
		cd+=a;
	}
	printf("%.2f",cd);
}
