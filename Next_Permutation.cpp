// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

// The replacement must be in place and use only constant extra memory.

// Example 1:

// Input: nums = [1,2,3]
// Output: [1,3,2]
// Example 2:

// Input: nums = [3,2,1]
// Output: [1,2,3]
// Example 3:

// Input: nums = [1,1,5]
// Output: [1,5,1]
// Example 4:

// Input: nums = [1]
// Output: [1]

// Constraints:

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 100

#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v)
{
    cout << "The Given Array looks like - [ ";

    for (int i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
            cout << v[i];
        else
            cout << v[i] << ", ";
    }

    cout << " ] " << endl;
}

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int i = n - 2;

        while (i >= 0 && nums[i] >= nums[i + 1])
            i--;

        if (i >= 0)
        {
            int j = n - 1;
            while (nums[j] <= nums[i])
                j--;
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
        }
        else
            reverse(nums.begin(), nums.end());
    }
};

int main()
{
    system("CLS");
    Solution obj;
    vector<int> nums = {1, 2, 3};
    obj.nextPermutation(nums);
    print_vector(nums);

    vector<int> nums1 = {3, 2, 1};
    obj.nextPermutation(nums1);
    print_vector(nums1);

    vector<int> nums2 = {1, 1, 5};
    obj.nextPermutation(nums2);
    print_vector(nums2);

    vector<int> nums3 = {1, 2, 6, 7, 5, 5};
    obj.nextPermutation(nums3);
    print_vector(nums3);
    return 0;
}