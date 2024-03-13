#include"bits/stdc++.h"
#define MAX 100000000
using namespace std;
int a[MAX];
int main()
{
int n,c,i,h=0;
cin>>n>>c;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=1;i<n;i++)
{
if(a[i]>a[i+1])
{
h++;
}
}
cout<<h;
}
