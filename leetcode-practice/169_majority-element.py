class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        nums.sort()
        return nums[(len(nums) // 2)]
# 題目有說「The majority element is the element that appears more than ⌊n / 2⌋ times.」所以排序後取中間的元素就可以了