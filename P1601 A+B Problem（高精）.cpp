#include"bits/stdc++.h"
using namespace std;
int main()
{
	int a[501],b[501],c[501],x=0,la,lb,lc=0,i=1,j=1,z;
	char e[501],f[501];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	do
	{
		cin>>e[i];
		a[i]=int(e[i]);
		i++;
		cout<<endl<<"i:"<<i;	
	}while(e[i]!='\n');
	do
	{
	    cin>>f[j];
	    b[j]=int(f[j]);
	    j++;
	}while(f[j]!='\n');
	if(la>lb)
	{
		z=la;
	}
	else
	{
		z=lb;
	}
	for(lb=1;lb<=z;lb++)
	{
		c[lb]=a[lb]+b[lb]+x;
		x=c[lb]%10;
		c[lb]/=10;
		lc++;
	}
	while(c[lc]==0&&lc>=1)
	{
		lc--;
	}
	for(int q=1;q<=lc;q++)
	{
		cout<<c[lc];
	}
}
