#include"bits/stdc++.h"
using namespace std;
int main()
{
	int starth,startm,finalh,finalm,h,m;
	cin>>starth>>startm>>finalh>>finalm;
	h=finalh-starth;
	m=finalm-startm;
	m+=h*60;
	cout<<m;
}
