#include"bits/stdc++.h"
using namespace std;
int l,h1,h2;
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
			break;
		}
	}
	return true;
}
int main()
{
	cin>>l;
	for(int i=1;i<=l;i++)
	{
		if(IsPrime(i)&&h2+i<=l)
		{
			cout<<i<<endl;
			h2+=i;
			h1+=1;
		}
	}
	cout<<h1;
    return 0;
}
