#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][4],x,i,j,b[15],max,nom;
	for (i=0; i<3; i++)
		for (j=0; j<4; j++) cin >> a[i][j];
			x=0;
	for (i=0; i<3; i++) x+=a[i][3];
	for (i=0; i<3; i++)
	{
		b[i]=0;
		for (j=0; j<3; j++) b[i]+=a[i][j];
	}
    max=b[0]; nom=0;
    for (i=1; i<3; i++)
    	if (b[i]>max) {max=b[i]; nom=i;};
    cout << nom+1 << ", " << x;
}