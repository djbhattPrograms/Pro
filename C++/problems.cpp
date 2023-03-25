#include <bits/stdC++.h>
using namespace std;
int fib(int n)
{
    // int original = n;
    // int rev=0;
    // while (n > 0)
    // {
    //     int last_digit = n % 10;
    //     n=n/10;
    //     rev=(rev*10)+last_digit;
    // }
    // if (original==rev)
    // {
    //     return 1;
    // }else{
    //     return 0;
    // }
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 2) + fib(n - 1);
}
bool isPalindrome(int count, string s)
{
    if (count >= s.size() / 2)
    {
        return true;
    }
    if (s[count] != s[s.size() - 1 - count])
    {
        return false;
    }
    isPalindrome(count + 1, s);
}
int main()
{
    string s;
    getline(cin, s);

    cout << isPalindrome(0, s) << endl;

    return 0;
}