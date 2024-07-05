#include <bits/stdc++.h>
using namespace std;
int b[7][7];
void kvadrat(int x, int y)
{
    for (int i=x; i<7-x; i++)
    {
    	b[x][i]=y; b[6-x][i]=y;
    	b[i][x]=y; b[i][6-x]=y;
    }
}
int main()
{
	int a[4],i,j;
	for (i=0; i<4; i++) cin >> a[i];
	for (i=0; i<4; i++) kvadrat(i,a[i]);
	for (i=0; i<7; i++)
	{
		for (j=0; j<7; j++) cout << b[i][j] << " ";
		cout << endl;
	}
}
