#include"bits/stdc++.h"
using namespace std;
int main()
{
	const float PI=3.14;
	int h,r,t;
	float s;
	cin>>h>>r;
	s=h*PI*r*r;
	s=s/1000;
	t=ceil(20/s);
	cout<<t;
}
