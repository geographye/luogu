#include"bits/stdc++.h"
using namespace std;
int a;
int main()
{
	cin>>a;
	while(a!=1)
	{
		if(a%2==1)
		{
			cout<<a<<"*3+1="<<a*3+1<<endl;
			a=a*3+1;
		}
		else
		{
			cout<<a<<"/2="<<a/2<<endl;
			a=a/2;
		}
	}
}
