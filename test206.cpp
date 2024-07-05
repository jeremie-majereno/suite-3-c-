#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,max;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			max=a[0][0];
		for (i=0; i<5; i++)
			if (a[i][i]>max) max=a[i][i];
		cout << max;
}