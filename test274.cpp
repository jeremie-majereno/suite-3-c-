#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[15][5],i,j,max,n,nom,b[15];
	cin >> n;
	for (i=0; i<n; i++)
		for (j=0; j<5; j++) cin >> a[i][j];
	for (i=0; i<n; i++)
	{
       b[i]=0;
       for (j=0; j<5; j++) b[i]+=a[i][j];
	}
    max=b[0]; nom=0;
    for (i=0; i<n; i++)
    	if (b[i]>max) {max=b[i]; nom=i;};
    for (j=0; j<5; j++)
    cout << a[nom][j] << " ";
    cout << endl;
    cout << nom+1;
}