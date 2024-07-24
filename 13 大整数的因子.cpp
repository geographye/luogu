//Wrong Answer
#include"bits/stdc++.h"
using namespace std;
long long c;
int main()
{
	cin>>c;
	bool s=false;
	for(int k=2;k<=9;k++)
	{
		if(c%k==0)
		{
			cout<<k<<" ";
			s=true;
		}
	}
	if(!s)
	cout<<"none";
}
