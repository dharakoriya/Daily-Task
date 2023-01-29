#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int r,g,b,m;
	    cin>>r>>g>>b>>m;
	    long a[r] , s[g] ,c[b];
	    for(long i=0;i<r;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a , a +r);
	    for(long i=0;i<g;i++)
	    {
	        cin>>s[i];
	    }
	    sort(s , s +g);
	    for(long i=0;i<b;i++)
	    {
	        cin>>c[i];
	    }
	    sort(c , c +b);
	    long max[3] = {a[r-1],s[g-1],c[b-1]}; 
	    sort(max , max+3);
	    int z;
	    while(m--)
	    {
	        max[2] = max[2]/2;
	        sort(max , max+3);
	        z = max[2];
	    }
	    cout<<z<<endl;
	}
	return 0;
}
