#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[10][10],i,j,k,max,nom,n;
	cin >> n; 
	for (i=0; i<n; i++)
		for (j=0; j<n; j++) cin >> a[i][j];
    for (i=0; i<n; i++)
    {
       max=a[i][0]; nom=0;
       for (j=0; j<n; j++)
       	if (a[i][j]>max) {max=a[i][j];nom=j;};
       a[i][nom]=0;
    }
    for (i=0; i<n; i++)
    {
    	for (j=0; j<n; j++) cout << a[i][j] << " ";
    		cout << endl; 
    }

}