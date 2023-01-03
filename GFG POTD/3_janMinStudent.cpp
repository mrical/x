//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code E
class Solution {
  public:
  int binarySearch(vector<int> &temp,int key,int s){
        int start=0,end=s-1,mid,index;
        while(start<=end){
            mid = (start+end)/2;
            if(temp[mid]==key)return mid;
            else if(temp[mid]>key){
                index=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return index;
    }
    int removeStudents(int H[], int N) {
        // code here
        vector<int> temp;
        temp.push_back(H[0]);
        int s =1;
        for(int i=1;i<N;i++){
            if(H[i]>temp[s-1]){
                temp.push_back(H[i]);
                s++;
            }
            else{
                int index = binarySearch(temp,H[i],s);
                temp[index]=H[i];
            }
        }
        return N-s;
        
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends
