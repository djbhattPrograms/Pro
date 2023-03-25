#include <bits/stdC++.h>
using namespace std;
bool Check_newton(int arr[], int n)
{
    for (int i = 1; i < n-1; i++)
    {
        if (arr[i] - arr[i - 1] == arr[i + 1] - arr[i])
        {
            continue;
        }
        else
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 9};
    int solution = Check_newton(arr, 5);
    if (solution == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}