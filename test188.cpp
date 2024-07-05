#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++) cout << a[i][j] << " " ;
			cout << endl;
	}
}