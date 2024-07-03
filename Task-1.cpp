class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int lagbe = target - nums[i]; // need to achieve the target
            if (numMap.count(lagbe)) {
                return {numMap[lagbe], i}; // solution is found
            }
            numMap[nums[i]] = i; //keep track to which element in map
        }

        return {}; // No solution found
    }
};

// Time complexity: O(n) and space complexity: O(n)