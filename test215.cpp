#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,n;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			i=0;
		while ((i<5) && (a[i][i]>0)) i++;
		if (i==5) cout << "No";
			else cout << i+1 << "," << i+1;
}