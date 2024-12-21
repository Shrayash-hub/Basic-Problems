//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long factorial(long long x){
        long long fact=1;
        for(int i=2;i<=x;i++){
            fact = fact*i;
        }
        return fact;
    }
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> a;
        long long y=1;
        while(factorial(y)<=n){
            a.push_back(factorial(y));
            y++;
        }
        return a;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends