class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        // edge case when nums.size() == 2
        if (nums.size() == 2)
        {
            return abs(nums[0] - nums[1]);
        }

        // set starting difference to the ends of the vector, (first and last value.)
        int max{ abs(nums[0] - nums[nums.size()-1]) };
        int test{};

        // now check the rest adjacent pairs.
        for (int i{0}; i < nums.size()-1; i++)
        {
            test = abs(nums[i] - nums[i+1]);
            if (test > max)
            {
                max = test;
                continue;
            }
        }
        return max;
    }
};