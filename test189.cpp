#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,n;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			cin >> n;
		for (j=0; j<5; j++)
			cout << a[n-1][j] << " ";
}