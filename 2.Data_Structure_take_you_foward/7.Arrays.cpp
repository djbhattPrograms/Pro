#include <bits/stdC++.h>
using namespace std;
void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Checking if the array is sorted
bool sorted_if(int n, vector<int> arr)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
// brute solution of unique number of element
// checking unique number of element
int unique_elements(int n, int arr[])
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]); // time complexity nlogn
    }
    int index = 0;
    for (auto it : st)
    { // time complexity n
        arr[index] = it;
        index++;
    }

    return index;
}
void move_all_zero_back(int arr[], int n)
{
    // vector<int> temp;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         temp.push_back(arr[i]);
    //     }
    // }
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     arr[i]=temp[i];
    // }
    // for (int i = temp.size(); i < n; i++)
    // {
    //     arr[i]=0;
    // }

    // print_arr(arr,n);

    int j = -1; // for knowing the index at which we have the first zero
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    print_arr(arr, n);
}
int linear_search(int arr[], int n, int num)
{
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
// brute method of solving union problem using set
void un(int arr1[], int n1, int arr2[], int n2)
{
    set<int> s;
    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }
    int union_array[s.size()];
    int i = 0;
    for (auto it : s)
    {
        union_array[i] = it;
        i++;
    }

    print_arr(union_array, s.size());
}
// union of two sorted
vector<int> Union(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> unionArray;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != arr1[i])
            {
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != arr2[j])
            {
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (j < m)
    {
        if (unionArray.back() != arr2[j])
        {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }
    while (i < n)
    {
        if (unionArray.back() != arr1[i])
        {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }
    return unionArray;
}
// instersection Brute method
vector<int> Intersection(int a[], int b[], int n1, int n2)
{
    vector<int> ans;
    int visted[n2] = {0};
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j] && visted[j] == 0)
            {
                ans.push_back(a[i]);
                visted[j] = 1;
                break;
            }
            if (b[j] > a[i])
            {
                break;
            }
        }
    }
    return ans;
}
vector<int> intersection(int a[], int b[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans;
}

void mising_number_sorted_array(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << endl;
        }
    }
}
void missing_number_using_hash(int arr[], int n)
{
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 1; i < n; i++)
    {
        if (hash[i] == 0)
        {
            cout << i << endl;
        }
    }
}
int misssing_number_by_total_sum(int arr[], int n)
{
    int total_sum = (n * (n + 1)) / 2;
    int temp_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        temp_sum = temp_sum + arr[i];
    }
    return (total_sum - temp_sum);
}

int missing_number_by_XOR(int arr[], int n)
{
    // xor means 1^1=0;3^3=0 {{so XOR1(XOR of first array)^XOR2(XOR of Second array)=0 but since there is a missing element so XOR1^XOR2 will give the missing number }}
    int XOR1 = 0;
    int XOR2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        XOR1 = XOR1 ^ (i + 1); // (1^2^3^4)
        XOR2 = XOR2 ^ arr[i];
    }
    XOR1 = XOR1 ^ n; //(1^2^3^4^5)
    return XOR1 ^ XOR2;
}
int maxm_one(int arr[], int n)
{
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}
void check_number_for_ones(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << num << endl;
        }
    }
}
int main()
{
    // declaration
    int arr[] = {9, 2, 1, 5, 2};
    cout << sizeof(arr) / sizeof(int) << endl;
    // maximum limit of size of array inside the main function is 10^6
    // maximum limit of size of array as global variable is 10^7

    // optimal solution of largest element in a array
    int max = arr[0];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max << endl;

    // better solution for second largest element in a array
    int second_max = INT_MIN;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (second_max < arr[i] && arr[i] < max)
        {
            second_max = arr[i];
        }
    }
    cout << second_max << endl;

    // optimal solution for second largest element in a array
    int max_1 = arr[0];
    int max_2 = -1; // if there is element lesser than -1 then use INT_MIN
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (max_1 < arr[i])
        {
            max_2 = max_1;
            max_1 = arr[i];
        }
        else if (max_1 > arr[i] && arr[i] > max_2)
        {
            max_2 = arr[i];
        }
    }
    cout << max_2 << endl;

    // optimal solution for second smallest element in a array
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (smallest > arr[i])
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (smallest < arr[i] && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    cout << ssmallest << endl;

    // checking if sorted
    cout << sorted_if(5, {1, 2, 3, 4, 5}) << endl;

    // checking for no. of unique element

    // int arr[] = {9, 2, 1, 5, 2};
    int arr1[] = {1, 1, 2, 2, 2, 3, 3};
    int index = unique_elements(5, arr);
    cout << index << endl;
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // checking the no. of unique element for sorted array
    int i = 0; // no.of unique element
    for (int j = 0; j < sizeof(arr1) / sizeof(int); j++)
    {
        if (arr1[j] != arr1[i])
        {
            i++;
            arr1[i] = arr1[j]; // putting the unique element in the correct position
        }
    }
    cout << i + 1 << endl;

    // left rotation by 1 place;
    int arr2[] = {1, 2, 3, 4, 5};
    int n = 5;
    int temp = arr2[0];
    for (int i = 1; i < n; i++)
    {
        arr2[i - 1] = arr2[i];
    }
    // putting the temp to the last element
    arr2[n - 1] = temp;
    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // left rotaion by d places
    int arr4[] = {9, 2, 1, 5, 2};
    int n1 = 5;
    int d = 3;
    d = d % n;

    // putting the elements in temp[]

    int temp2[d];
    for (int i = 0; i < d; i++)
    {
        temp2[i] = arr4[i];
    }

    // shifting
    for (int i = d; i < n1; i++)
    {
        // 3->0;4->1;
        arr4[i - d] = arr4[i];
    }

    // putting back the temp element in the original array
    for (int i = n1 - d; i < n1; i++)
    {
        arr4[i] = temp2[i - (n1 - d)];
    }

    print_arr(arr4, n1);

    int arr5[] = {9, 2, 1, 5, 2};
    reverse(arr5, arr5 + d); // reversing the array from 0th to (d-1)th index{not included}
    reverse(arr5 + d, arr5 + n1);
    reverse(arr5, arr5 + n1);

    print_arr(arr5, n1);

    int arr6[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    move_all_zero_back(arr6, 10);

    int arr7[] = {3, 6, 2, 1, 45, 5, 3, 2, 2, 4, 5, 6, 7, 5, 32, 345, 5, 4, 3, 5};
    int size = sizeof(arr7) / sizeof(int);
    cout << "linear Search: " << linear_search(arr7, size, 345) << endl;

    int x = 10;
    int m = 7;
    int arr8[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr9[] = {2, 3, 4, 4, 5, 11, 12};
    un(arr8, 7, arr9, 9);
    vector<int> v = Union(arr8, arr9, x, m);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<int> v1 = Intersection(arr8, arr9, x, m);
    cout << "Insercation of arr1 and arr2 is  " << endl;
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<int> v2 = intersection(arr8, arr9, x, m);
    cout << "Insercation of arr1 and arr2 is  " << endl;
    for (auto it : v2)
    {
        cout << it << " ";
    }
    cout << endl;

    int arr101[] = {1, 2, 4, 5};
    mising_number_sorted_array(arr101, 5);
    missing_number_using_hash(arr101, 4);
    int ans = misssing_number_by_total_sum(arr101, 5);
    cout << ans << endl;
    int ans1 = missing_number_by_XOR(arr101, 5);
    cout << ans1 << endl;

    int arr10[] = {1, 1, 1, 1, 1, 1};
    int size1 = sizeof(arr10) / sizeof(int);
    int maxi = maxm_one(arr10, size1);
    cout << maxi << endl;

    int arr11[] = {1, 1, 2, 3, 3, 4, 4};
    int size2 = sizeof(arr11) / sizeof(int);
    check_number_for_ones(arr11, size2);

    return 0;
}