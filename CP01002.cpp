#include<iostream>
using namespace std;
long tinh(int a)
{
	long tong=1;
	for(int i=1;i<=a;i++)
	{
		tong=tong*i;
	}
	return tong;
}
int main()
{
	long long a,tong=0;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		tong=tong+tinh(i);
	}
	cout<<tong;
}