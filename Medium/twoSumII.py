class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left:int = 0
        right:int = (len(numbers) - 1)
        while left < right:
            nSum = numbers[left] + numbers[right]
            if nSum > target:
                right = right - 1
            elif nSum < target:
                left = left + 1
            else:
                return [left + 1, right + 1]      
        return
        