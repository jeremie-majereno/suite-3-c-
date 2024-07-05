#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[25][25],i,j,n,m,kol,s;
	cin >> n >> m;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) cin >> a[i][j];
			kol=0;
		for (i=0; i<n; i++)
		{
			s=0; 
			for (j=0; j<m; j++) s+=a[i][j];
				if (s>3) kol++;
		}
	cout << kol;
}