#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[7],i,n,j;
	cin >> n;
	for (i=0; i<n; i++) cin >> a[i];
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) cout << a[j] << " ";
			cout << endl;
	}
}