//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        // optimal approch is to take 2 pointer one at start of array and second at last of array
        // and then keep swapping those elements(by p1++,p2--) until p1 becomes greater than p2(means
        // the meet )
        int p1=0;int p2=arr.size()-1;
        while(p1<p2){
            swap(arr[p1],arr[p2]);
            p1++;p2--;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends