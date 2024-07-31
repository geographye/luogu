#include"bits/stdc++.h"
using namespace std;
bool is_prime(int number)
{
	if(number<=1)
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
int n;
bool flag=false;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(is_prime(i)&&is_prime(i+2)&&i+2<=n)
		{
			cout<<i<<" "<<i+2<<endl;
			flag=true;
		}
	}
	if(!flag)
	{
		cout<<"empty";
	}
}
