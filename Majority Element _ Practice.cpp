//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
       sort(a,a+size);
       int max = 1, res = a[0], cur = 1;
        for (int i = 1; i < size; i++) 
        {
            if (a[i] == a[i - 1])
           {
              cur++;
           }
            else
            {
                cur = 1;
            }
                
            if (cur > max)
            {
                max = cur;
                res = a[i - 1];
            }
        }
        if(max>size/2)
       {
           return res;
       }
       else
       {
           return -1;
       }
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
