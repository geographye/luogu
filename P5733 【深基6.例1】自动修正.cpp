/*题目描述
大家都知道一些办公软件有自动将字母转换为大写的功能。
输入一个长度不超过 100且不包括空格的字符串。
要求将该字符串中的所有小写字母变成大写字母并输出。

输入格式
输入一行，一个字符串。

输出格式
输出一个字符串，即将原字符串中的所有小写字母转化为大写字母。*/
#include"bits/stdc++.h"
#define MAX 100
using namespace std;
int main()
{
char a[MAX];
int i=0,j;
while(a[i]!='\0')
{
cin>>a;
if(a[i]>=97&&a[i]<=122)
{
a[i]-=32;
}
i++;
}
for(j=0;j<=i;j++)
{
cout<<a[j];
}
}
