#include"bits/stdc++.h"
using namespace std;
struct puple{
	char name[21];
	int score;
};
int n;
puple student[101];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>student[i].name>>student[i].score;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(student[j].score<student[j+1].score)
			{
				swap(student[j],student[j+1]);
			}
			else if(student[j].score==student[j+1].score)
			{
				if(strcmp(student[j].name,student[j+1].name)>0)
				{
					swap(student[j],student[j+1]);
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<student[i].name<<" "<<student[i].score<<endl;
	}
}
