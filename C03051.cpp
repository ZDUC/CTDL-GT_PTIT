#include <bits/stdc++.h>
using namespace std;
long snt(long a)
{
	if(a==1) return 0;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	long l,r,dem=0,min,max;
    	cin>>l>>r;
    	if(l>r) 
    	{
    		min=r;
    		max=l;
		}
		else
		{
			min=l;
			max=r;
		}
    	for(long j=min;j<=sqrt(max);j++)
    	{
    		if(snt(j)==1&&j*j<=max)
    		{
    			dem++;
    		}
    	}
    	cout<<dem<<endl;
    }
}