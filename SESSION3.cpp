#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    int i = 0;

    while (i <= right) {
        if (nums[i] == 0) {
            swap(nums[i], nums[left]);
            left++;
            i++;
        } else if (nums[i] == 2) {
            swap(nums[i], nums[right]);
            right--;
        } else {  // nums[i] == 1
            i++;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);

    for (int nums : nums) {
        cout << nums << " ";
    }
    return 0;
}