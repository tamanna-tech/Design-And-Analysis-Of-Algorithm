
#include <stdio.h>
#include <limits.h> // for INT_MAX
void merge(int arr[], int p, int q, int r, int *comparisonCount, int *swapCount) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1], R[n2 + 1];
    for (int i = 1; i <= n1; i++) {
        L[i] = arr[p + i - 1];
    }
    for (int j = 1; j <= n2; j++) {
        R[j] = arr[q + j];
    }
    L[n1 + 1] = INT_MAX; // Sentinel value for L
    R[n2 + 1] = INT_MAX; // Sentinel value for R
    int i = 1, j = 1;
    for (int k = p; k <= r; k++) {
        (*comparisonCount)++;
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
            (*swapCount)++;
        }
    }
}
void mergeSort(int arr[], int p, int r, int *comparisonCount, int *swapCount) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSort(arr, p, q, comparisonCount, swapCount);
        mergeSort(arr, q + 1, r, comparisonCount, swapCount);
        merge(arr, p, q, r, comparisonCount, swapCount);
    }
}


int main() {
    int arr[100], num, i;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("Enter the element at arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    int comparisonCount = 0, swapCount = 0;
    mergeSort(arr, 0, num - 1, &comparisonCount, &swapCount);
    printf("\nArray after sorting: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of comparisons: %d", comparisonCount);
    printf("\nNumber of swaps: %d", swapCount);
    printf("\n Tamanna k.c ");
    printf("\n Roll number: 34");
    return 0;
}


