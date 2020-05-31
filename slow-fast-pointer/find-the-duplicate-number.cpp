#include "slow-fast-pointer.h"

using namespace std;

/*
 * Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), prove that at least one duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.

Example 1:

Input: [1,3,4,2,2]
Output: 2
Example 2:

Input: [3,1,3,4,2]
Output: 3
Note:

You must not modify the array (assume the array is read only).
You must use only constant, O(1) extra space.
Your runtime complexity should be less than O(n2).
There is only one duplicate number in the array, but it could be repeated more than once.
 */

int findDuplicate(vector<int>& nums) {
    if(nums.size() <= 1) {
        return -1;
    }

    int slowIndex = nums[0];
    int fastIndex = nums[nums[0]];

    while(slowIndex != fastIndex) {
        slowIndex = nums[slowIndex];
        fastIndex = nums[nums[fastIndex]];
    }

    fastIndex = 0;
    while(slowIndex != fastIndex) {
        slowIndex = nums[slowIndex];
        fastIndex = nums[fastIndex];
    }

    return slowIndex;
}