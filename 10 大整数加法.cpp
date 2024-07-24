//Wrong
//Runtime Error
#include"bits/stdc++.h"
using namespace std;
int a[201],b[201],h[201];
int main()
{
	char c[200],d[200];
	int lena,lenb,lenc;
	cin>>c>>d;
	lena=strlen(c);
	lenb=strlen(d);
	lenc=1;
	for(int i=1;i<=lena;i++)
	{
		a[i]=c[lena-i]-'0';
	}
	for(int i=1;i<=lenb;i++)
	{
		b[i]=d[lenb-i]-'0';
	}
	int x=0;
	while(lenc<=lena||lenc<=lenb)
	{
		h[lenc]=a[lenc]+b[lenc]+x;
		x=h[lenc]/10;
		h[lenc]%=10;
		lenc+=1;
	}
	h[lenc]=x;
	while(lenc>1&&h[lenc]==0)
	{
		lenc--;
	}
	for(int i=lenc;i>=1;i++)
	{
		cout<<h[i];
	}
}
