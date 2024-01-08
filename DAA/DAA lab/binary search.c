#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x) {
  while (l <= r) {
    int m = l + (r - l) / 2;

    if (arr[m] == x) return m;

    if (arr[m] < x)
      l = m + 1;

    else
      r = m - 1;
  }
  return -1;
}

int main() {
  int n,i;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements of the array (in sorted order): \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int x;
  printf("Enter the element you want to search for: ");
  scanf("%d", &x);
  int result = binarySearch(arr, 0, n - 1, x);
  if (result == -1)
    printf("Element is not present in array")
  else
  {
 printf("Element is present at index %d", result);
  }
    printf("\nTamanna k.c");
    printf("\n Roll no 34");
  return 0;
}


