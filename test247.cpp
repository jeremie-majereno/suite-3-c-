#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[9][9],i0,j0,r,c,n,m,i,j;
	cin >> n >> m;
	cin >> i0 >> j0 >> r >> c;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) a[i][j]=0;
	for (i=i0-1; i<i0+r-1; i++)
		for (j=j0-1; j<j0+c-1; j++) a[i][j]=1;
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++) cout << a[i][j] << " ";
			cout << endl;
	}

}