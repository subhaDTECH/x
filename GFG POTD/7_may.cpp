#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    string stringMirror(string s){
        // Code here
          int n = s.size();
        int ind = 0;
        for(int i = 1; i<n; i++){
            if(s[0]==s[1])  break;
            if(s[i]<=s[i-1]){
                ind = i;
            }
            else break; 
        }
        string t = s.substr(0,ind+1);
        string p = t;
        reverse(p.begin(),p.end());
        return t+p; 
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends
