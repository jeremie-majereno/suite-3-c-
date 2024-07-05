#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[9][9],n,m,i,j,kol,
	    i1,j1,r1,c1,
	    i2,j2,r2,c2,
	    i3,j3,r3,c3;
	cin >> n >> m;
	cin >> i1 >> j1 >> r1 >> c1;
	cin >> i2 >> j2 >> r2 >> c2;
	cin >> i3 >> j3 >> r3 >> c3;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) a[i][j]=0;
	for (i=i1-1; i<i1+r1-1; i++)
		for (j=j1-1; j<j1+c1-1; j++) a[i][j]=1;
    for (i=i2-1; i<i2+r2-1; i++)
    	for (j=j2-1; j<j2+c2-1; j++) a[i][j]=1;
    for (i=i3-1; i<i3+r3-1; i++)
    	for (j=j3-1; j<j3+c3-1; j++) a[i][j]=1;
    kol=0;
    for (i=0; i<n; i++)
    	for (j=0; j<m; j++)
    		if (a[i][j]==0) kol++;
    	cout << kol;
}