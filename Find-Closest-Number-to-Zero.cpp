class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        // edge case, when our initial value is 0 return;
        if (closest == 0) { return 0;}

        // iterate through the array
        for (int i = 1; i < nums.size(); i++) 
        {
            // edge case, if we ever encounter a 0, go ahead and return 0;
            if (nums[i] == 0) { return 0; }

            // if the absolute value is ever equal, if the nums[i] is greater than the current closest, closest = nums[i]
            if (abs(nums[i]) == abs(closest)) 
            {
                if (nums[i] > closest) { closest = nums[i]; continue;}
            }

            // normal case, if the absolute value of nums[i] is ever less than absolute value of the 
            // current closest, closest = nums[i]
            if (abs(nums[i]) < abs(closest)) { closest = nums[i]; }
        }
        return closest;
    }


    // helper function absolute value.
    int abs(int num) 
    {
        if (num == 0) 
        {
            return 0;
        }

        if (num > 1) {
            return num;
        }
        
        else
        {
            return (-1)*(num);
        }
    }
};