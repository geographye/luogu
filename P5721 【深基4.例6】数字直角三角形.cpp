#include"bits/stdc++.h"
using namespace std;
int n,s=1;
int main()
{
	cin>>n;
	for(int i=n;i>0;i--)
	{
		for(int j=i;j>0;j--)
		{
			printf("%02d",s);
			s+=1;
		}
		cout<<endl;
	}
}
