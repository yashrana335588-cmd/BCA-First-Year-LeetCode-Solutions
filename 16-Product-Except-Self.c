int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int i;
    int *a = malloc(numsSize * sizeof(int));
    int left = 1, right = 1;

    for (i = 0; i < numsSize; i++) {
        a[i] = left;
        left = left * nums[i];
    }

    for (i = numsSize - 1; i >= 0; i--) {
        a[i] = a[i] * right;
        right = right * nums[i];
    }

    *returnSize = numsSize;

    return a;
}
