#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Job {
  char id;
  int dead;
  int profit;
} Job;

int compare(const void* a, const void* b) {
  Job* temp1 = (Job*)a;
  Job* temp2 = (Job*)b;
  return (temp2->profit - temp1->profit);
}

int min(int num1, int num2) { return (num1 > num2) ? num2 : num1; }

void printJobScheduling(Job arr[], int n) {
  qsort(arr, n, sizeof(Job), compare);
  int result[n];
  bool slot[n];
  int i, j;
  for (i = 0; i < n; i++) slot[i] = false;
  for (i = 0; i < n; i++) {
    for (j = min(n, arr[i].dead) - 1; j >= 0; j--) {
      if (slot[j] == false) {
        result[j] = i;
        slot[j] = true;
        break;
      }
    }
  }
  for (i = 0; i < n; i++)
    if (slot[i]) printf("%c ", arr[result[i]].id);
}



int main() {
  int n,i;
  printf("Enter the number of jobs: ");
  scanf("%d", &n);

  Job arr[n];
  for (i = 0; i < n; i++) {
    printf("Enter job id, deadline and profit for job %d: ", i + 1);
    scanf(" %c %d %d", &arr[i].id, &arr[i].dead, &arr[i].profit);
  }

  printf("Following is the maximum profit sequence of jobs:\n");
  printJobScheduling(arr, n);

  printf("\n----------Tamanna kc-----------\n");
  printf("----------Roll No:34-------------\n");

  return 0;
}

