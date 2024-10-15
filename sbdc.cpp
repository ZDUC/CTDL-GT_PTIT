#include<bits/stdc++.h>
using namespace std;
void tim(int **a,int n,int m,vector<int> &v,int i0,int j0,int buoc)
{
	if(i0==n&&j0==n)
	{
		v.push_back(buoc);
		return;
	}
	if((i0+1)<=n)
	{
		int xuong=abs(a[i0][j0]-a[i0+1][j0]);
		if((i0+xuong)<=n&&xuong>0)
		{
			buoc++;
			i0+=xuong;
			tim(a,n,m,v,i0,j0,buoc);
			i0-=xuong;
			buoc--;
		}
	}
	if((j0+1)<=m)
	{
		int phai=abs(a[i0][j0]-a[i0][j0+1]);
		if((j0+phai)<=m&&phai>0)
		{
			buoc++;
			j0+=phai;
			tim(a,n,m,v,i0,j0,buoc);
			j0-=phai;
			buoc--;
		}
	}
	if((i0+1)<=n&&(j0+1)<=m)
	{
		int cheo=abs(a[i0][j0]-a[i0+1][j0+1]);
		if(((i0+cheo)<=n||(j0+cheo)<=m)&&cheo>0)
		{
			buoc++;
			j0+=cheo;
			j0+=cheo;
			tim(a,n,m,v,i0,j0,buoc);
			j0-=cheo;
			j0-=cheo;
			buoc--;
		}
	}
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int**a=NULL;
		a=(int**) malloc (n*sizeof(int*));
		vector<int> v;
		for(int i=1;i<=n;i++)
		{
			a[i]=(int*)malloc(m*sizeof(int));
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>a[i][j];
			}
		}
		tim(a,n,m,v,1,1,0);
		int min=INT_MAX;
		for(int i=0;i<v.size();i++)
		{
			if(min>v[i]) min=v[i];
		}
		if(min==INT_MAX) cout<<-1<<endl;
		else cout<<min<<endl;
	}
}