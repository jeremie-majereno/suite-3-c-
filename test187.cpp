#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[11],n,i,d,t,s;
	cin >> n >> d >> t;
	for (i=0; i<n; i++) cin>>a[i];
		s=d+t; i=0;
	while ((i<n) && (a[i]!=s)) i++;
		if (i==n) cout << "No";
		else cout << "Yes";

}