
#include <stdio.h>

int main() {
    int nums[100], result[100];
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", 2*n);
    for (i = 0; i < 2 * n; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < n; i++) {
        result[2*i] = nums[i];
        result[2*i+1] = nums[i+n];
    }
    printf("Shuffled array: ");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
