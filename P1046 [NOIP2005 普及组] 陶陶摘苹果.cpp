#include"bits/stdc++.h"
using namespace std;
int main()
{
int i,a[10],h=0,k;
for(i=0;i<10;i++)
{
cin>>a[i];
}
cin>>k;
for(i=0;i<10;i++)
{
if(k+30>=a[i])
{
h+=1;
}
}
cout<<h;
}
