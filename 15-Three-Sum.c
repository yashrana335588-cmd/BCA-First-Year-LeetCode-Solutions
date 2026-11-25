
int compare(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int** threeSum(int* nums, int numsSize,
               int* returnSize, int** returnColumnSizes) {

    int **result = NULL;
    int count = 0, capacity = 10;
    int i, left, right, sum;

    qsort(nums, numsSize, sizeof(int), compare);

    result = malloc(capacity * sizeof(int*));
    *returnColumnSizes = malloc(capacity * sizeof(int));

    for (i = 0; i < numsSize - 2; i++) {

        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        left = i + 1;
        right = numsSize - 1;

        while (left < right) {
            sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {

                if (count == capacity) {
                    capacity = capacity * 2;

                    result = realloc(result, capacity * sizeof(int*));
                    *returnColumnSizes = realloc(
                        *returnColumnSizes, capacity * sizeof(int)
                    );
                }

                result[count] = malloc(3 * sizeof(int));

                result[count][0] = nums[i];
                result[count][1] = nums[left];
                result[count][2] = nums[right];

                (*returnColumnSizes)[count] = 3;
                count++;

                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1]) {
                    left++;
                }

                while (left < right && nums[right] == nums[right + 1]) {
                    right--;
                }
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    *returnSize = count;
    return result;
}
