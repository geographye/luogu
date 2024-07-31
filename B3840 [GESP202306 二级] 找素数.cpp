#include"bits/stdc++.h"
using namespace std;
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
	int a,b,c=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(isPrime(i))
		{
			c+=1;
		}
	}
	cout<<c;
}
