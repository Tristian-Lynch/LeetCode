class Solution(object):
    def twoSum(self, nums, target):
        \\\
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        \\\
        hash_map = {}
        i = 0
        \\\
        We iterate through the array adding vales to a hash_map, checking if the target minus
        the current number is already in the hashmap, if so return true. 
        Since looking up an item in a hash_map is O(n), 
        we also have a O(n) time complexity.
        \\\
        for x in nums:
            if target-x in hash_map:
                return hash_map[target-x],i
            else:
                hash_map[x] = i
            i+=1
        
        