class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dictnew = {}
        for index,values in enumerate(nums):
            diff = target - values
            if diff in dictnew.keys():
                return [dictnew[diff],index]
            dictnew[values] = index