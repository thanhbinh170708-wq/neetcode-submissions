class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in nums:
            if (target - i) in nums[(nums.index(i)+1):]:
                k =[]
                k.append(nums.index(i))
                nums.remove(i)
                k.append(nums.index(target-i)+1)
                return k