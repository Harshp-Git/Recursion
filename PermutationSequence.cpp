#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string helper(string str, int k, string ans) {
        int n = str.length();
        if (n == 0) return ans;
        int fact = 1;
        for (int i = 2; i <= n - 1; i++) {
            fact *= i;
        }
        int idx = k / fact;
        if (k % fact == 0) idx--;
        char ch = str[idx];
        string left = str.substr(0, idx);
        string right = str.substr(idx + 1);
        int q = 1;
        if (k % fact == 0) q = fact;
        else q = k % fact;
        return helper(left + right, q, ans + ch);
    }

    string getPermutation(int n, int k) {
        string str = "";
        for (int i = 1; i <= n; i++) {
            str += to_string(i);
        }
        return helper(str, k - 1, "");
    }
};

int main() {
    int n, k;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;
    Solution solution;
    string permutation = solution.getPermutation(n, k);
    cout << "The " << k << "th permutation of the numbers from 1 to " << n << " is: " << permutation << endl;
    return 0;
}