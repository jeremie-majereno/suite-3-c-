#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,n,b[5];
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			for (j=0; j<5; j++)
			{
				b[j]=0;
				for (i=0; i<5; i++) b[j]+=a[i][j];
			}
		for (j=0; j<5; j++) cout << b[j];
}