#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[25][10],i,j,n,m,k,t,s;
	cin >> n >> m >> k >> t;
	for (i=0; i<n; i++) 
		for (j=0; j<m; j++) cin >> a[i][j];
			s=0;
		for (i=0; i<k; i++)
			for (j=0; j<t; j++) s+=a[i][j];
				cout << s;
}