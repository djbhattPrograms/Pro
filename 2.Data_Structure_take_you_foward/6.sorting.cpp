#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    // select the minimum and swap
    // swaping loops
    for (int i = 0; i < n - 2; i++)
    {
        // for minimum
        int mim = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[mim])
            {
                mim = j;
            }
        }
        swap(arr[mim], arr[i]);
    }
}
void bubble_sort(int arr[], int n)
{
    // push the largest to the back by adjacent swaps
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n-i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }    
        }
    }
}
void insertion_sort(int arr[], int n)
{
    // Take a element and place it in correct order
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}
void marge(int arr[], int low, int mid, int high)
{
    int temp[100000];
    int left = low;
    int right = mid + 1;
    int temp_index = 0;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[temp_index] = arr[left];
            left++;
        }
        else
        {
            temp[temp_index] = arr[right];
            right++;
        }
        temp_index++;
    }
    while (left <= mid)
    {
        temp[temp_index] = arr[left];
        left++;
        temp_index++;
    }
    while (right <= high)
    {
        temp[temp_index] = arr[right];
        right++;
        temp_index++;
    }
    for (int i = low; i < high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void merge_sort(int arr[], int low, int high)
{
    if (low >=high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    marge(arr, low, mid, high);
}



int main()
{
    int arr[] = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    merge_sort(arr,0,n-1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
