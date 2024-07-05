#include <bits/stdc++.h>
using namespace std;
int main()
{
	int b[8][8],a[4],i,j;
	for (i=0; i<4; i++) cin >> a[i];
	for (i=0; i<4; i++)
	{
		for (j=0; j<8; j++) b[i][j]=a[i];
		for (j=0; j<8; j++) b[7-i][j]=a[i];
	}
    for (i=0; i<8; i++)
    {
    	for (j=0; j<8; j++) cout << b[i][j] << " ";
        cout << endl;    		
    }
}