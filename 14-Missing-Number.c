int missingNumber(int* nums, int numsSize) {
    int i;
    int sum = 0;
    int total = numsSize * (numsSize + 1) / 2;

    for (i = 0; i < numsSize; i++) {
        sum = sum + nums[i];
    }

    return total - sum;
}
