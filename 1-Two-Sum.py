class Solution(object):
    def twoSum(self, nums, target):
        \\\
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        \\\
        hash_map = {}
        i = 0
        for x in nums:
            if target-x in hash_map:
                return hash_map[target-x],i
            else:
                hash_map[x] = i
            i+=1
        
        