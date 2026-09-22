/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* x = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    x[0] = nums[0];
    for (int c = 1; c < numsSize; c++) {
        x[c] = x[c - 1] + nums[c];
    }
    return x;
}