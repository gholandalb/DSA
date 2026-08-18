#include <stdio.h>

#define MAX 1e9

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1, n2 = r - mid;

    int left[n1 + 1];
    int right[n2 + 1];

    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];

    for (int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];

    left[n1] = MAX;
    right[n2] = MAX;

    int i = 0;
    int j = 0;

    for (int k = l; k <= r; k++)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
    }
}

void mergesort(int arr[], int l, int r)
{
    if (r > l)
    {
        int m = (r - l)/2 + l;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[8] = {2, 3, 6, 8, 1, 6, 14, 21};

    mergesort(arr, 0, 7);

    for (int i = 0; i < 8; i++)
        printf("%d ", arr[i]);

    return 0;
}