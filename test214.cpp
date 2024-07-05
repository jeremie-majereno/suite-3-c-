#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,n;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			cin >> n;
		    i=0;
	while ((i<5) && (a[i][n-1]!=-7)) i++;
	if (i==5) cout << "no";
	else cout << i+1 << "," << n;
}