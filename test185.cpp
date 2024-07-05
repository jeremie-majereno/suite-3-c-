#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a[5],max;
	int i,nom;
    for (i=0; i<5; i++) cin>>a[i];
    	max=a[0]; nom=0;
    for (i=0; i<5; i++)
    	if (a[i]>max) {max=a[i];nom=i;}
    cout << setprecision(1) << fixed << max << endl;
    cout << nom+1;
}