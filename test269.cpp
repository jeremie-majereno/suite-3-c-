#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[7][2],i,j,sum;
	for (i=0; i<7; i++)
		for (j=0; j<2; j++) cin >> a[i][j];
			sum=0;
	for (i=0; i<7; i++)
		for (j=0; j<2; j++) sum+=a[i][j];
	cout << sum;
}