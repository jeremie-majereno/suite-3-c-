#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],b[5],i,j;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			for (j=0; j<5; j++)
			{
				b[j]=a[0][j];
				for (i=0; i<5; i++)
					if (a[i][j]>b[j]) b[j]=a[i][j];
			}
			for (j=0; j<5; j++) cout << b[j];
}