char ** fizzBuzz(int n, int* returnSize){
    char** res = malloc(n * sizeof(char*));
    for (int i = 1; i <= n; i++) {
        res[i-1] = malloc(9 * sizeof(char));
        if (i % 15 == 0) strcpy(res[i-1], "FizzBuzz");
        else if (i % 3 == 0) strcpy(res[i-1], "Fizz");
        else if (i % 5 == 0) strcpy(res[i-1], "Buzz");
        else sprintf(res[i-1], "%d", i);
    }
    *returnSize = n;
    return res;
}
