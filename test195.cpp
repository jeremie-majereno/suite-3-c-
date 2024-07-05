#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,n,sum;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			cin >> n;
		sum=0;
	for (i=0; i<5; i++) sum+= a[i][n-1];
		cout << sum;
}