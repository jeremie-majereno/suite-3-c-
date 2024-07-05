#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][6],i,j,nom,max,sum,b[6];
	for (i=0; i<3; i++)
		for (j=0; j<6; j++) cin >> a[i][j];
    for (j=0; j<6; j++) 
    	{
    		b[j]=0;
    		for (i=0; i<3; i++) b[j]+=a[i][j];
    	}
    max=b[0] ; nom=0;
    for (j=1; j<6; j++)
    	if (b[j]>max) {max=b[j];nom=j;};
    cout << nom+1 << endl;
    sum=0;
    	for (j=0; j<6; j++) sum+=b[j];
    cout << sum;

}