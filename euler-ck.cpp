#include<bits/stdc++.h>

using namespace std;
#define MAX 50

int A[MAX][MAX], n, u=8;

int kiemtra(){
    int i, j, s, d=0;
    for(i=1; i<=n;i++)
    { s=0;
        for(j=1; j<=n;j++) s+=A[i][j];
            if(s%2) d++; 
    }
    if(d>0){
        cout <<"Không phải đồ thị Euler";
        return 0;
    } 
    else{
        cout <<"Là đồ thị Euler";
        return 1;
    }
}

void EulerCycle( int u){
    int v, x, top, dCE;
    int stack[MAX], CE[MAX]; top=1; stack[top]=u; dCE=0; do {
    v = stack[top]; x=1;
    while (x<=n && A[v][x]==0)
    x++; 
    if (x>n) {
        dCE++; CE[dCE]=v; top--; }
    else {
        top++; stack[top]=x;
        A[v][x]=0; A[x][v]=0; 
        }
    } 
    while(top!=0);
    printf("\n Co chu trinh Euler:"); 
    for(x=dCE; x>0;x--)
        printf("%3d",CE[x]);
}

void process(){
	ifstream fpi("test2.in");
	fpi>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			fpi>>A[i][j];
		}
	}
	kiemtra();
    EulerCycle(u);
	cout<<endl;
}

int main(){
	process();
}