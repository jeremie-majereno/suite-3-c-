#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][4],b[5],i,j;
	for (i=0; i<5; i++)
		for (j=0; j<4; j++) cin >> a[i][j];
	for (i=0; i<5; i++)
	{
		b[i]=0;
		for (j=0; j<4; j++) b[i]+=a[i][j];
	}
    for (i=0; i<5; i++) cout << b[i] << " ";
}