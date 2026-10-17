#include <stdio.h>

int kadane(int arr[], int n) {
    int max_sum = arr[0];
    int current_sum = 0;

    for (int i = 0; i < n; i++) {
        current_sum += arr[i];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
        if (current_sum < 0) {
            current_sum = 0;
        }
    }
    return max_sum;
}

int main() {
 int arr[] ={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nMaximum Subarray Sum: %d<br>", kadane(arr, n));
    return 0;
}



