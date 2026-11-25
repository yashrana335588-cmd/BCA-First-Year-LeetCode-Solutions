int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int i;
    int *a = malloc(2 * numsSize * sizeof(int));

    for (i = 0; i < numsSize; i++) {
        a[i] = nums[i];
        a[i + numsSize] = nums[i];
    }

    *returnSize = 2 * numsSize;

    return a;
}
