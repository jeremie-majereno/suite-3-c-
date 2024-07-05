#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,n,k;
	cin >> n >> k;
	for (i=0; i<n; i++) cin>>a[i];
		i=0;
	while ((i<n) && (a[i]!=k+1)) i++;
	if (i==n) cout << "-";
	else cout << "+";
}