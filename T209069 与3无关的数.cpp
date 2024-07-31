#include"bits/stdc++.h"
using namespace std;
int n,sw[100001][7],g1=1,pro[100001],g2=1,h,no_pro[100001],g3=1;
bool added[100001];
bool In(int number,int arr[],int ws)
{
	for(int i=1;i<=ws;i++)
	{
		if(number==arr[i])
		{
			return true;
			break;
		}
	}
	return false;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int j=i;
		while(j)
		{
			sw[i][g1]=j%10;
			j/=10;
			if(sw[i][g1]==3&&!added[i])
			{
				no_pro[g2]=i;
				g2+=1;
				added[i]=true;
			}
			g1+=1;
		}
		g1=1;
	}
	memset(added,0,sizeof(added));
	for(int i=1;i<=n;i++)
	{
		if(!In(i,no_pro,g2)&&!added[i])
		{
			pro[g3]=i;
			added[i]=true;
			g3+=1;
		}
	}
	for(int i=1;i<=g3;i++)
	{
		if(pro[i]%3!=0)
		{
			h+=pro[i];
		}
	}
	cout<<h;
    return 0;
}
