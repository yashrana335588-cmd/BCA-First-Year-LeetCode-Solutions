double* convertTemperature(double celsius, int* returnSize) {
    double *a = malloc(2 * sizeof(double));

    a[0] = celsius + 273.15;
    a[1] = celsius * 1.8 + 32;

    *returnSize = 2;

    return a;
}
