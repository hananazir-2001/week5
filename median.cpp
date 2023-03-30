#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
        sort(nums.begin(), nums.end());
        int len = nums.size();
        double median;
        if (len % 2 == 0) {
            median = (double)(nums[len/2-1] + nums[len/2])/2;
        } else {
            median = (double)nums[len/2];
        }
        cout << "[";
        for (int i = 0; i < len; i++) {
            if (i > 0) cout << ", ";
            cout << nums[i];
        }
        cout << "] ";
        cout << fixed << setprecision(1) << median << endl;
    }
    return 0;
}
