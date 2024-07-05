#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a[10],min;
	int i,nom,n;
	cin >> n;
	for (i=0; i<n; i++) cin>>a[i];
		min=a[0];nom=0;
	for (i=0; i<n; i++)
		if (a[i]<min) {min=a[i];nom=i;}
	cout << setprecision(1) << fixed << min << "(" << nom+1 << ")";
}