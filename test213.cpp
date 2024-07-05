#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,n,min;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			cin >> n;
		j=0;
		while ((j<5) && (a[n-1][j]!=3)) j++;
		if (j==5) cout << "No";
		else cout << n << "," << j+1;
}