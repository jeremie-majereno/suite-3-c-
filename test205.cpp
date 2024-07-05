#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],n,i,j,max;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			cin >> n;
		max=a[0][n-1];
	for (i=0; i<5; i++)
		if (a[i][n-1]>max) max=a[i][n-1];
	cout << max;

}