#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[12][12],i,j,n,r,c,k,kol;
	cin >> n >> r >> c >> k;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++) cin >> a[i][j];
			kol=0;
		for (i=r-1; i<r+k-1; i++)
			for (j=c-1; j<c+k-1; j++)
				if (a[i][j]==1) kol++;
					cout << kol;
}