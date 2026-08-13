
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        fastcur = 1
        slowcur = 0
        while fastcur < len(nums):
            if (nums[fastcur] != 0):
                if (nums[slowcur] == 0):
                    nums[slowcur],nums[fastcur] = nums[fastcur],nums[slowcur]
                    fastcur += 1
                    slowcur += 1
                else:
                    if slowcur == fastcur -1:
                        slowcur += 1
                        fastcur += 1
                    else:
                        slowcur += 1

            else:
                fastcur += 1

                    
        



        
            
            


        

        