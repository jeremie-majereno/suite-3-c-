#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,kol,n;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
    kol=0;
    for (i=0; i<5; i++)
    	if (a[i][4-i]==3) kol++;
    cout << kol;

}