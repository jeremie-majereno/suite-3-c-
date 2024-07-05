#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[10][10],i,j,n;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			if ((i+j)%2==1) a[i][j]=2;
				else a[i][j]=1;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) cout << a[i][j] << " ";
			cout << endl;
	}
}