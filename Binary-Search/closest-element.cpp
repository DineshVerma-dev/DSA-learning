#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> result;

        // If x is smaller than the smallest element, take first k elements
        if (x <= arr[0]) {
            return vector<int>(arr.begin(), arr.begin() + k);
        }
        // If x is greater than the largest element, take last k elements
        if (x >= arr[n - 1]) {
            return vector<int>(arr.end() - k, arr.end());
        }

        // Binary Search to find closest position
        int lo = 0, hi = n - 1;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] < x) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }

        // Set up two pointers around the closest element
        int left = lo - 1, right = lo;
        while (k--) {
            if (left < 0) {
                right++;
            } else if (right >= n || abs(arr[left] - x) <= abs(arr[right] - x)) {
                left--;
            } else {
                right++;
            }
        }

        return vector<int>(arr.begin() + left + 1, arr.begin() + right);
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4, x = 3;
    
    vector<int> result = sol.findClosestElements(arr, k, x);
    cout << "Closest elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
