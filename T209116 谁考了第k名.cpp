#include"bits/stdc++.h"
using namespace std;
struct student{
	int id;
	double grade;
};
int main()
{
	int n,k;
	cin>>n>>k;
	student puple[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>puple[i].id>>puple[i].grade;
	}
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(puple[j].grade<puple[j+1].grade)
			{
				swap(puple[j],puple[j+1]);
			}
		}
	}
	cout<<puple[k].id<<" "<<puple[k].grade;
}
