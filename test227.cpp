#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],b[5],i,j,minb;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			for (i=0; i<5; i++)
			{
				b[i]=a[i][0];
				for (j=0; j<5; j++)
					if (a[i][j]>b[i]) b[i]=a[i][j];
			}
			minb=b[0];
			for (i=0; i<5; i++)
				if (b[i]<minb) minb=b[i];
			cout << minb;
		
}