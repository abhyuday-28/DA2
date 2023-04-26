#include <stdio.h>

int divide(int arr[], int left, int right) {
    int count = 0;
    if (left < right) {
        int mid = (left + right) / 2;
        count += divide(arr, left, mid);
        count += divide(arr, mid+1, right);
        count++;
    }
    return count;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = divide(arr, 0, n-1);
    
    printf("Number of iterations: %d\n", count);
    return 0;
}