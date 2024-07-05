#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3],i,j,max;
	for (i=0; i<3; i++)
		for (j=0; j<3; j++) cin >> a[i][j];
			max=a[0][0];
	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			if (a[i][j]>max) max=a[i][j];
		cout << max;
}