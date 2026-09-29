/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    result[0] = nums[0];
    for (int c = 1; c < numsSize; c++) { 
    // Note: numsSize is the number of elements, while array indices start from 0.
    // E.g. if numsSize == 4, the last valid element is result[3], so c must not exceed 3.
        result[c] = result[c - 1] + nums[c];
    }
    return result;
}