#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,n,b;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
	cin >> n;
	b=0;
    for (j=0; j<5; j++)
        	if (a[n-1][j]<0) b++;
	cout << b;
}