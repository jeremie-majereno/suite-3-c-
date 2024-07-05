#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,n,min;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			cin >> n;
			min=a[n-1][0];
		for (j=0; j<5; j++)
			if (a[n-1][j]<min) min=a[n-1][j];
		cout << min;
}			