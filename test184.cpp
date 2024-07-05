#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[22],i,n,l,s,kol;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		cin >> l;
	s=20*(l-1);
	kol=0;
	for (i=0; i<n; i++)
		if (a[i]==s) kol++;
		cout << s << endl;
		cout << kol;
}