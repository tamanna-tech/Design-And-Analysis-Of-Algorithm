#include <stdio.h>
int main()
{
    int arr[100];
    int i, num,swapp=0,compare=0;

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
     // Outer loop runs n times
    for (int i = 0; i< num; i++)
    {
        // Inner loop runs for each element up to the unsorted portion
        for (int j = 0; j < num - i - 1; j++)
        {
            compare++;        // Compare adjacent elements
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapp++;
            }
        }
    }



    printf("\nSorted array: ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n no of swap:%d",swapp);
    printf("\n no of compersion:%d",compare);
    printf("\n Tamanna k.c");
    printf("\n Roll no:34 ");
    return 0; 
}

