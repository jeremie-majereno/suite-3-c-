#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[10][10],i,j,min,nom,n;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++) cin >> a[i][j];
	for (j=0; j<n; j++)
	{
		min=a[0][j]; nom=0;
        for (i=1; i<n; i++)
        	if (a[i][j]<min) {min=a[i][j];nom=i;};
        a[nom][j]=0;
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) cout << a[i][j] << " ";
			cout << endl;
	}
}