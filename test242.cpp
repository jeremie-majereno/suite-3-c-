#include <bits/stdc++.h>
using namespace std;
int main()
{
	int e[8][8],i,j,a,b,c,d;
	cin >> a >> b >> c >> d;
	for (i=0; i<8; i++)
	{
		e[i][0]=a; e[i][7]=a;
		e[i][1]=b; e[i][6]=b;
		e[i][2]=c; e[i][5]=c;
		e[i][3]=d; e[i][4]=d;
	}
	for (i=0; i<8; i++)
	{
		for (j=0; j<8; j++) cout << e[i][j] << " ";
			cout << endl;
	}
}