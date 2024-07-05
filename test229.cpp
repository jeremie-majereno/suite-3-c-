#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,minb,b[5];
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			for (j=0; j<5; j++)
			{
				b[j]=a[0][j];
				for (i=0; i<5; i++)
					if (a[i][j]>b[j]) b[j]=a[i][j];

			}
			minb=b[0];
			for (j=0; j<5; j++)
            if (b[j]<minb) minb=b[j];
        cout << minb;
}