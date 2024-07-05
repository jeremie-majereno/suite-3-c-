#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[10][10],i,j,n;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++) cin >> a[i][j];
	for (i=0; i<n; i++)
	{
		a[0][i]=0; a[n-1][i]=0;
		a[i][0]=0; a[i][n-1]=0;
		a[i][i]=0; a[i][n-1-i]=0;
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) cout << a[i][j] << " ";
			cout << endl; 
	}
}