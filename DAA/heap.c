#include <stdio.h>
void heapify(int arr[], int n, int i) {
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  if (l < n && arr[l] > arr[largest])
    largest = l;
  if (r < n && arr[r] > arr[largest])
    largest = r;
  if (largest != i) {
    int temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    heapify(arr, n, largest);
  }
}
void heapSort(int arr[], int n) {
 int i;
  for (i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);
  for (i = n - 1; i >= 0; i--) {
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;
    heapify(arr, i, 0);
  }
}

int main() {
  int n,i;
  printf("Enter the size of the array: ");
  scanf("%d", & n);
  int arr[n];
  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", & arr[i]);
  }
  heapSort(arr, n);
  printf("Sorted array: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
    printf("\n-Tamanna k.c --");
    printf("\n-Roll no- 34-");
  return 0;
}

