#include"bits/stdc++.h"
using namespace std;
bool IsPrime(int number)
{
	if(number==1)
	{
		return false;
	}
	for(int i=2;i<=sqrt(number);i++)
	{
		if(number%i==0)
		{
			return false;
		}
	}
	return true;
}
int a,b,h;
int main()
{
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(IsPrime(i))
		{
			h+=1;
		}
	}
	cout<<h;
}
