#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,sum=0;
	    cin>>a>>b;
	    sum=a+b;
	    int count=0,tmp;
	    while(sum>0)
	    {
	        tmp = sum%10;
	        int z=0;
	        if(tmp == 0 || tmp == 6 || tmp ==9)
	        {
	            z=6;
	            count =count +z;
	        }
	        else if(tmp == 1)
	        {
	            z = 2;
	            count = count +z;
	        }
	        else if(tmp == 2 || tmp ==3 || tmp ==5)
	        {
	            z=5;
	            count = count+z;
	        }
	        else if(tmp == 4)
	        {
	            z =4;
	            count = count+z;
	        }
	        else if(tmp ==7)
	        {
	            z = 3;
	            count = count+z;
	        }
	        else if(tmp == 8)
	        {
	            z = 7;
	            count = count +z;
	        }
	        sum = sum /10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
