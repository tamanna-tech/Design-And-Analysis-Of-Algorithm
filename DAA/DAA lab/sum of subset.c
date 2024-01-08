#include <stdio.h>
#include <stdlib.h>
int flag = 0;

void subsetSum(int i, int n, int set[], int sum, int subset[], int subSize){
    if (sum == 0){
        flag = 1;
        printf("[ ");
        int i;
        for (i= 0; i < subSize; i++){
            printf("%d ", subset[i]);
        }
        printf("]\n");
        return;
    }
    if (i == n) return;
    subsetSum(i + 1, n, set, sum, subset, subSize);
    if (set[i] <= sum){
        subset[subSize] = set[i];
        subsetSum(i + 1, n, set, sum - set[i], subset, subSize + 1);
    }
}
int main(){
    int set[] = {9,2,5,6,3,6,9};
    int sum = 12;
    int n = sizeof(set) / sizeof(set[0]);
    int subset[n];
    printf("Subsets for sum are:\n");
    subsetSum(0, n, set, sum, subset, 0);
	printf("\nName: Sadhana Khadka \tRoll No: 20\n");
    return 0;
}
