#include"bits/stdc++.h"
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e=c-a;
	f=d-b;
	if(f>=60)
	{
		f=f-60;
		e++;
	}
	if(f<0)
	{
		f=f+60;
		e--;
	}
	cout<<e<<" "<<f;
}
