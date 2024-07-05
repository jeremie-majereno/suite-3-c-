#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[14][14],n,m,i,j,x,y;
	cin >> n >> m;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++) a[i][j]=0;
	for (i=0; i<m; i++)
	{
		cin >> x >> y;
		a[x-1][y-1]=1;
		a[y-1][x-1]=1;
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) cout << a[i][j] << " ";
			cout << endl;
	}
}