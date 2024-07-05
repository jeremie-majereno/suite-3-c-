#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[17],i,n,sum,l,m;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		sum=0; l=0; m=0;
	for (i=0; i<n; i++) sum+=a[i];
		l=sum*4;
	cout << l << endl;
	m=l*7 ;
	cout << m;
	
}