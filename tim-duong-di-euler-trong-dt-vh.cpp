#include <bits/stdc++.h>
using namespace std;
#define MAX 50
int A[MAX][MAX], n, u = 50;
int kiemtra()
{
    int i, j, s, d = 0;
    for (i = 1; i <= n; i++)
    {
        s = 0;
        for (j = 1; j <= n; j++)
            s += A[i][j];
        if (s % 2)
            d++;
    }
    if (d > 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void EulerCycle(int u)
{
    int v, x, top, dCE;
    int stack[MAX], CE[MAX];
    top = 1;
    stack[top] = u;
    dCE = 0;
    do
    {
        v = stack[top];
        x = 1;
        while (x <= n && A[v][x] == 0)
            x++;
        if (x > n)
        {
            dCE++;
            CE[dCE] = v;
            top--;
        }
        else
        {
            top++;
            stack[top] = x;
            A[v][x] = 0;
            A[x][v] = 0;
        }
    } while (top != 0);
    for (x = dCE; x > 0; x--)
        cout << CE[x] << " ";
}

void process()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }
    if(kiemtra()) {
        cout << "Khong co duong di Euler";
    }
    else EulerCycle(1);
    cout << endl;
}
int main()
{
    process();
}