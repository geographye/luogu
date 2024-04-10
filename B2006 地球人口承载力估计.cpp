/*题目描述
假设地球上的新生资源按恒定速度增长。
照此测算，地球上现有资源加上新生资源可供x 亿人生活 a 年，或供 y 亿人生活b 年。
为了能够实现可持续发展，避免资源枯竭，地球最多能够养活多少亿人？*/
#include"bits/stdc++.h"
using namespace std;
int main()
{
/*输入格式
一行，包括四个正整数 x,a,y,b，两个整数之间用单个空格隔开。

输出格式
一个实数 z，表示地球最多养活 z 亿人，舍入到小数点后两位。*/
int x,a,y,b;
float z,s,yuan;
cin>>x>>a>>y>>b;
z=fabs(a*x-b*y)/fabs(a-b);
printf("%.2f",z);
}
