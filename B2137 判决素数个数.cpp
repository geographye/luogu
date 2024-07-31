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
int h=0;
int main()
{
	int x,y;
	cin>>x>>y;
	if(x>y)
	{
		swap(x,y);  //确定起始范围 
	}
	for(int i=x;i<=y;i++)
	{
		if(is_prime(i))
		{
			h+=1;
		}
	}
	cout<<h;
}
