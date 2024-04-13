class Solution
{
public
    int removeDuplicates(int[] nums)
    {
        int j = 1;
        for (int i = 1; i < nums.length; i++)
        {
            if (j == 1 || nums[i] != nums[j - 2])
            {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
} // two pointer best technique

// Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.