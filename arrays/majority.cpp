// Brute force method
// Majority elements 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for (int val : nums) {
            int n = nums.size();
            int fre = 0;

            for (int ele : nums) {
                if (ele == val) {
                    fre++;
                }
            }

            if (fre > n / 2) {
                return val;
            }
        }
        return -1;
    }
};

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.majorityElement(nums);

    if(result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element found" << endl;

    return 0;
}