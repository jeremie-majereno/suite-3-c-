#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][4],b[4],i,j,sum,nom;
	for (i=0; i<5; i++)
		for (j=0; j<4; j++) cin >> a[i][j];
	for (j=0; j<4; j++)
	{
		b[j]=0;
		for (i=0; i<5; i++) b[j]+=a[i][j];
	}
    sum=b[0];nom=0;
    for (j=1; j<4; j++)
    	if (b[j]>sum) {sum=b[j]; nom=j;};
    cout << nom+1;
}

