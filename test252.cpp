#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a[20],i,m,t,n;
	cin >> n; 
	for (i=0; i<n; i++) cin >> a[i];
	cin >> m;
    t=a[0]; a[0]=a[n-1]; a[n-1]=t;
    for (i=0; i<n; i++)
    {
    	cout << a[i] << " ";
    	if ((i+1)%m==0) cout << endl;
    }
}