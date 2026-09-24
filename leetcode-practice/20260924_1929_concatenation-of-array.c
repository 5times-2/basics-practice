/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * 2 * sizeof(int));
    *returnSize = numsSize * 2;
    int Ncount;
    for (Ncount = 0; Ncount < numsSize; Ncount++) {
        result[Ncount] = nums[Ncount];
    }   
    Ncount = Ncount - 1;
    
    for (int Rcount = (numsSize * 2) - 1; Rcount >= numsSize; Rcount--) {
        result[Rcount] = nums[Ncount];
        Ncount = Ncount - 1;
    }
    return result;
}