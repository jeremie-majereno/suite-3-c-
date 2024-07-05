#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,sum,n;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			cin >> n;
		sum=0;
	for (j=0; j<5; j++) sum+=a[n-1][j];
		cout << sum;
}