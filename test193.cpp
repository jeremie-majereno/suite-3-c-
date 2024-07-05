#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,sum;
	for (i=0; i<5; i++)
		for(j=0; j<5; j++) cin >> a[i][j];
			sum=0;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) sum+=a[i][j];
			cout << sum;
}