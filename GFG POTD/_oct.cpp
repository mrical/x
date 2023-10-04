//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        int ans=0;
       int n=s.length();
       unordered_map<char, int> mp{
           {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

       ans+=mp[s[n-1]];
       int prev=mp[s[n-1]];
       for(int i=n-2;i>=0;i--){
           if(mp[s[i]]>= prev){
               ans+=mp[s[i]];
           }
           else{
               ans-=mp[s[i]];
           }
            prev=mp[s[i]];
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends
