#include"bits/stdc++.h"
using namespace std;
char letter[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 
int main()
{
	int n,g=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++,g++)
		{
			if(g<=25)
			{
				cout<<letter[g];
			}
			else
			{
				g-=26;
				cout<<letter[g];
			 } 
		}
		cout<<endl;
	}
}
