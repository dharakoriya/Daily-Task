#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    if(a+b <= d && c<=e)
	    {
	         cout<<"YES"<<endl;
	    }
	    else if(a+c <= d && b<=e)
	    {
	        cout<<"YES"<<endl;
	    }
	    else if(b+c<=d && a<=e)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}
