#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[25][10],i,j,n,m,k1,k2,t1,t2,s;
	cin >> n >> m >> k1 >> k2 >> t1 >> t2;
	for (i=0; i<n; i++) 
		for (j=0; j<m; j++) cin >> a[i][j];
			s=0;
		for (i=k1-1; i<k2; i++)
			for (j=t1-1; j<t2; j++) s+=a[i][j];
				cout << s;
}