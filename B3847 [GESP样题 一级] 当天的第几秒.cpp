#include"bits/stdc++.h"
using namespace std;
int hour,minut,second,s;
int main()
{
	char a;
	cin>>hour>>minut>>second>>a;
	s=hour*60*60+minut*60+second;
	if(a=='P')
	{
		s+=12*60*60;
	}
	cout<<s;
}
