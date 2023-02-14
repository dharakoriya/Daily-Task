#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,count=0;
	    cin>>a>>b;
	    if(b>a)
	    {
	        cout<<count<<endl;
	    }
	    else
	    {
	        while(a>=b)
	        {
	           count++;
	           a = a-b;
	        }
	        cout<<count<<endl;
	    }
	}
	return 0;
}
