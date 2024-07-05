#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10][10],i,j,n,m,i1,i2,j1,j2,s;
	cin >> n >> m;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) cin >> a[i][j];
			cin >> i1 >> j1 >> i2 >> j2;
		s=0; 
		for (i=i1-1; i<i2; i++)
			for (j=j1-1; j<j2; j++) s+=a[i][j];
				cout << s;
}