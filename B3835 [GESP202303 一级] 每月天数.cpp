#include"bits/stdc++.h"
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(m%2==1&&m<=7||m%2==0&&m>=8)
	{
		cout<<"31";
	}
	else if(m%2==0&&m<=6&&m!=2||m%2==1&&m>=9)
	{
		cout<<"30";
	}
	else
	{
		if(n%4==0&&n%100!=0||n%400==0)
		{
			cout<<"29";
		}
		else
		{
			cout<<"28";
		}
	}
}
