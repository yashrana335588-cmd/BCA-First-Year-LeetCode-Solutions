char** fizzBuzz(int n, int* returnSize) {
    char **a = malloc(n * sizeof(char*));

    *returnSize = n;

    for (int i = 1; i <= n; i++) {
        a[i-1] = malloc(20 * sizeof(char));

        if (i % 3 == 0 && i % 5 == 0) {
            strcpy(a[i-1], "FizzBuzz");
        }
        else if (i % 3 == 0) {
            strcpy(a[i-1], "Fizz");
        }
        else if (i % 5 == 0) {
            strcpy(a[i-1], "Buzz");
        }
        else {
            sprintf(a[i-1], "%d", i);
        }
    }

    return a;
}
