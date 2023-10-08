#include <stdio.h>

int main() {
    int arr[100], num, i, min, max, comparisons = 0, swaps = 0;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("Enter the element at arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array before finding min and max: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    min = max = arr[0];
    for (i = 0; i < num; i++) {
        comparisons++;
        if (arr[i] > max) {
            swaps++;
            max = arr[i];
        
   }
        if (arr[i] < min) {
            swaps++;
            min = arr[i];
        }
    }

    printf("\nMinimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    printf("Number of comparisons: %d\n", comparisons);
    printf("Number of swaps: %d\n", swaps);
    printf("\n------Tamanna k.c.-------------");
    printf("\n----------Roll No:34-------------");
    return 0;
}

