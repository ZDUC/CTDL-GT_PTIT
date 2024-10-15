#include<bits/stdc++.h>

using namespace std;

int a[100][100], n;
vector<int> v1, v2;

void solve()
{
	int tam1=0, tam2=0;
	for (int i=1;i<=n;i++)
	{
		int s1=0, s2=0;
		for (int j=1;j<=n;j++)
		{
			s1+=a[i][j];
			s2+=a[j][i];
		}
		if (s1-s2==1||s2-s1==1)
		{
			tam1++;
			v1.push_back(i);
		}
		else if (s1==s2)
		{
			tam2++;
			v2.push_back(i);
		}
	}
}

void EulerCycle(int u)
{
    int v, top=1, dCE;
    int stack[100], CE[100]; 
	stack[top]=u; 
	dCE=0; 
	do 
	{
    	v=stack[top]; 
		int x=1;
   		while (x<=n && a[v][x]==0)
    		x++; 
    	if (x>n) 
		{
        	dCE++; 
			CE[dCE]=v; 
			top--; 
		}
	    else 
		{
	        top++; 
			stack[top]=x;
	        a[v][x]=0; 
			a[x][v]=0; 
		}
    } 
    while(top!=0);
    for(int x=dCE; x>0;x--)
    	cout<<CE[x]<<" ";
}

void process()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	solve();
    if (v1.size()==2&&v2.size()==n-2)
    	EulerCycle(v1[0]);
    else
    	cout<<"Khong co duong di Euler";
}

int main()
{
	process();
	return 0;
}