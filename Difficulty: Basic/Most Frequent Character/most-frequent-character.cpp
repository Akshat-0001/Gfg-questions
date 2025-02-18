//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
      int arr[26]={0};
      for(int i=0;i<s.length();i++)
      {
          int ch;
          ch=s[i];
          int n=0;
          n=ch-'a';
          arr[n]++;
      }
      int maxi=INT_MIN,ans=0;
      for(int i=0;i<=25;i++)
      {
          if(maxi<arr[i])
          {
              ans=i;
              maxi=arr[i];
          }
      }
      return ans+'a';
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends