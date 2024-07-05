#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[4][4],i,j,min[4];
	for (i=0; i<4; i++)
		for (j=0; j<4; j++) cin >> a[i][j];
	for (j=0; j<4; j++)
	{
		min[j]=a[0][j];
		for (i=0; i<4; i++)
			if (a[i][j]<min[j]) min[j]=a[i][j];
	}
	for (j=0; j<4; j++) cout << min[j] << " "; 
}