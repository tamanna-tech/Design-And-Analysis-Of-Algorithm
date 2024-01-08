#include <stdio.h>
int partition(int arr[], int l, int r,int *swapp,int *compare) {
    int pivot = arr[l];
    int i = l;
    for (int j = i + 1; j <= r; j++) {
        (*compare)++;
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            (*swapp)++;
        }
    }
    int temp = arr[l];
    arr[l] = arr[i];
    arr[i] = temp;
    return i;
}

void quick_sort(int arr[], int l, int r,int *swapp,int *compare) {
    if (l < r) {
        int q = partition(arr, l, r,swapp,compare);
        quick_sort(arr, l, q - 1,swapp,compare);
        quick_sort(arr, q + 1, r,swapp,compare);
    }
}

int main() {
    int arr[100],num,i,swapp=0,compare=0;
     printf("Enter the number of elements you want to enter: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {


        printf("Enter the element at arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n your array before Sorted is:\n");
     for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, num - 1,&swapp,&compare);

    printf("\nArray after sorting: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
     printf("\nNumber of swaps: %d", swapp);
    printf("\nNumber of comparisons: %d", compare);
    printf("\n- Tamanna k.c ");
    printf("\n- Roll number: 34 ");
    return 0;
}


