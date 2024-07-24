//Wrong Answer
#include"bits/stdc++.h"
using namespace std;
int a[100],b[100];
int main()
{
	int n,na,nb,j=0,k=0,ha=0,hb=0;
	cin>>n>>na>>nb;
	for(int i=0;i<na;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<nb;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++,j++,k++)
	{
		if(j>na) j=0;
		if(k>nb) k=0;
		if(a[j]==0&&b[k]==2||a[j]==2&&b[k]==5||a[j]==5&&b[k]==0)
		{
			ha+=1;
		}
		else if(a[j]==0&&b[k]==5||a[j]==2&&b[k]==0||a[j]==5&&b[k]==2)
		{
			hb+=1;
		}
	}
	if(ha>hb)
	{
		cout<<"A";
	}
	else if(ha<hb)
	{
		cout<<"B";
	}
	else
	{
		cout<<"draw";
	}
}
