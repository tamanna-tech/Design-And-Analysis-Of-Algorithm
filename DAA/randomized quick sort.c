#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_partition(int arr[], int low, int high) {
  srand(time(NULL));
  int random = low + rand() % (high - low);
  int temp = arr[random];
  arr[random] = arr[high];
  arr[high] = temp;
  return partition(arr, low, high);
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low - 1,j;
  for (j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;
  return i + 1;
}

void randomize_quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = random_partition(arr, low, high);
    randomize_quickSort(arr, low, pi - 1);




    randomize_quickSort(arr, pi + 1, high);

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
  randomize_quickSort(arr, 0, n - 1);
  printf("Sorted array: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
    printf("\n--------Tamanna k.c-------------");
    printf("\n----------Roll No:34-------------");
  return 0;
}

