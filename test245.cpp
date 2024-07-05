#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[12][12],n,i,j;
	cin >> n;
	for (i=0; i<n; i++)
	{
		a[0][i]=1; a[n-1][i]=1;
		a[i][0]=1; a[i][n-1]=1;
	}
	for (i=1; i<n-1; i++)
		for (j=1; j<n-1; j++) a[i][j]=0;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) cout << a[i][j];
			cout << endl;
	}
}