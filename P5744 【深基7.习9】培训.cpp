#include"bits/stdc++.h"
using namespace std;
struct member{
	string name;
	int age;
	int grade;
};
int unname(member a)
{
	a.grade*=1.2;
	if(a.grade>600)
	{
		a.grade=600;
	}
	return a.grade;
}
int n;
	cin>>n;
	member a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].name>>a[i].age>>a[i].grade;
	}
int main()
{
	
	for(int i=0;i<n;i++)
	{
		a[i].grade=unname(*a);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].grade<<endl;
	}
}
