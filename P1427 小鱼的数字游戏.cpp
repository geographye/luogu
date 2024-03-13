#include"bits/stdc++.h"
using namespace std;
int main()
{
int n,a[101]={1},i=0;
while(a[i]!=0)
{
cin>>a[i+1];
i++;
}
for(n=i-1;n>0;n--)
{
cout<<a[n]<<" ";
}
}
