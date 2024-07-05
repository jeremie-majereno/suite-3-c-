#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[25][10],i,j,k,m,n,l,i0,j0,x;
	cin >> n >> m;
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) cin >> a[i][j];
	cin >> l >> i0 >> j0;
    x=4*l-4;
    k=0;
    i0--; j0--;
    for (i=i0; i<i0+l; i++)
    {
    	if (a[i][j0]==9) k++;
    	if (a[i][j0+l-1]==9) k++;
    }
    for (j=j0+1; j<j0+l-1; j++)
    {
    	if (a[i0][j]==9) k++;
    	if (a[i0+l-1][j]==9) k++;
    }
    if (k==x) cout << "Yes " << x;
    else cout << "No " << x-k;
}