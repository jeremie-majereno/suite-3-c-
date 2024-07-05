#include <bits/stdc++.h>
using namespace std ;
int a[12][12],m;
bool EQ(int x,int y)
{
	int j=0;
	while ((j<m) && (a[x][j]==a[y][j])) j++;
	return j==m;
}
int main()
{
	int n,i,j,s;
	cin >> n >> m; 
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) cin >> a[i][j];
	i=0;
    while ((i<n) && (EQ(i,n-1-i))) i++;
    if (i<n-1) cout << "No" << endl << i+1 << " " << n-i;
    else {
    	cout << "Yes" << endl ;
    	s=0;
    	for (i=0; i<n; i++)
    		for (j=0; j<m; j++) s+=a[i][j];
    	cout << s;
    }
}