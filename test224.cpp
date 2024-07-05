#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],b[5],maxb,j,i;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
			for (i=0; i<5; i++)
			{
				b[i]=0;
				for(j=0; j<5; j++) b[i]+=a[i][j];
			}
		maxb=b[0];
		for (i=0; i<5; i++)
			if (b[i]>maxb) maxb=b[i];
		cout << maxb ;
}