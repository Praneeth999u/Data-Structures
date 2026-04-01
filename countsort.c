#include <stdio.h>

void countSort(int arr[], int n)
{
    int i;

    int max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
   
    int count[max + 1];
    
    for(i = 0; i <= max; i++)
        count[i] = 0;
    
    for(i = 0; i < n; i++){
        count[arr[i]]++;
    }

    int index = 0;
    for(i = 0; i <= max; i++)
    {
        while(count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main()
{
    int arr[] = {5, 3, 2, 8, 6, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    countSort(arr, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
