//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int sumOfSeries(int n) {
        //he problem requires calculating the sum of cubes of natural numbers from 1 to n. 
        //To efficiently compute this sum,we can use the formula for the sum of cubes of natural numbers.
        int sum = (pow(n,2) * pow((n + 1),2)) / 4;
        //By utilizing the formula, we can avoid iterating through all the numbers from 1 to n, 
        //making the computation faster and more straightforward.
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends