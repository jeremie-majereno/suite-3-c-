#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][4],i,j,k;
	for (i=0; i<5; i++)
		for (j=0; j<4; j++) cin >> a[i][j];
	k=0;
    for(i=0; i<5; i++) k+=a[i][0]+a[i][2];
    	cout << k;
}