#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[10][10],i,j,n,k,nom,min;
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++) cin >> a[i][j];
	cin >> k;
    k--;
    min=a[k][0]; nom=0;
    for (j=1; j<n; j++)
    	if (a[k][j]<min) {min=a[k][j]; nom=j;};
    a[k][nom]=0;
    for (i=0; i<n; i++)
    {
    	for (j=0; j<n; j++) cout << a[i][j] << " ";
    		cout << endl;
    }
}