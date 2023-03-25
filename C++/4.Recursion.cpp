#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{
    int count = 0;
    if (count == n)
    {
        return;
    }
    cout << "Debraj" << endl;
    count++;
    printName(n - 1);
}

void printNumber(int n, int count)
{
    // if (count>n)
    // {
    //     return;
    // }
    // cout<<count<<endl;
    // printNumber(n,count+1);
    if (count < 1)
    {
        return;
    }
    printNumber(n, count - 1);
    cout << count << endl;
}

void printReverseNumber(int n, int count)
{
    if (count < 1)
    {
        return;
    }
    cout << count << endl;
    printReverseNumber(n, count - 1);
}

void ParameterisedSumOfNNumber(int n, int sum)
{
    if (n < 1)
    {
        cout << sum << endl;
        return;
    }
    ParameterisedSumOfNNumber(n - 1, sum + n);
}

int FunctionalSumOfNNumber(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + FunctionalSumOfNNumber(n - 1);
}

int FunctionalFactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * FunctionalFactorial(n - 1);
}
// there is two pointer pointing to the 0th index and n-1 th index respectively,and element are swap ,when first >=last ,the recursion stops,
void DoublePointerReverseArray(int first, int last, int arr[])
{
    if (first >= last)
    {
        return;
    }
    swap(arr[first], arr[last]);
    DoublePointerReverseArray(first + 1, last - 1, arr);
}
// there is only one pointer pointer to the 0th index and swap with the n-i-1th index elementand  runs for n/2 i.e half of the array
void SinglePointerReverseArray(int pointer, int arr[], int n)
{
    if (pointer >= (n / 2))
    {
        return;
    }
    swap(arr[pointer], arr[n - pointer - 1]);
    SinglePointerReverseArray(pointer + 1, arr, n);
}

bool CheckForPalindrome(int count,string &s)
{
    if (count >= (s.size() / 2))
    {
        return true;
    }
    if (s[count] != s[s.size() - count - 1])
    {
        return false;
    }
    CheckForPalindrome(count + 1, s);
}
// multiple Recursion
int fabonacciSeries(int n){
    if (n<=1)
    {
        return n;
    }
    return fabonacciSeries(n-1)+fabonacciSeries(n-2);
    
}

int main()
{
    printName(5);
    printNumber(5, 5);
    cout << endl;
    printReverseNumber(5, 5);
    ParameterisedSumOfNNumber(5, 0);
    cout << FunctionalSumOfNNumber(5) << endl;
    cout << FunctionalFactorial(5) << endl;
    cout << "Enter the number of Element in a Array" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    DoublePointerReverseArray(0, n - 1, arr);
    SinglePointerReverseArray(0, arr, n);
    cout << "The Reverse Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    string s="madam";
    cout<<CheckForPalindrome(0,s);
    cout<<endl;
    cout<<fabonacciSeries(5)<<endl;

    return 0;
}