#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[4][7],b[4],i,j,kol;
	for (i=0; i<4; i++)
		for (j=0; j<7; j++) cin >> a[i][j];
    for (i=0; i<4; i++)
    {
    	b[i]=0;
    	for (j=0; j<7; j++)
    	if (a[i][j]==6) b[i]++;
    }
    for (i=0; i<4; i++) cout << b[i] << " ";
 }