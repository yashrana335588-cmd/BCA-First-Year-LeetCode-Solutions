int findNumbers(int* nums, int numsSize) {
    int i, n, count = 0, digits;

    for (i = 0; i < numsSize; i++) {
        n = nums[i];
        digits = 0;

        while (n > 0) {
            digits++;
            n = n / 10;
        }

        if (digits % 2 == 0) {
            count++;
        }
    }

    return count;
}
