#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--)
	{
	    int a,b,area=0,max=0;
	    cin>>a>>b;
	    int c[a][3];
	    for(int i=0 ;i<a;i++)
	    {
	        for(int j=0;j<3;j++)
	        {
	            cin>>c[i][j];
	        }
	    }
	    for(int i = 0;i<a;i++)
	    {
	        if(c[i][2] <= b)
	        {
	            area = c[i][0]*c[i][1];
	            if(area>max)
	            {
	                max= area;
	            }
	        }
	    }
	    if(max==0)
	    {
	        cout<<"no tablet"<<endl;
	    }
	    else
	    {
	        cout<<max<<endl;
	    }
	    
	}
	return 0;
}
