int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *a = malloc(numsSize * sizeof(int));

    int s = 0;

    for (int i = 0; i < numsSize; i++) {
        s = s + nums[i];
        a[i] = s;
    }

    *returnSize = numsSize;

    return a;
}
