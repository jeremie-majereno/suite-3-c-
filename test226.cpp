#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],b[5],i,j,maxb;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			for (j=0; j<5; j++)
			{
				b[j]=0;
				for (i=0; i<5; i++) b[j]+=a[i][j];
			}
		maxb=b[0];
		for (j=0; j<5; j++)
			if (b[j]>maxb) maxb=b[j];
		cout << maxb;
}