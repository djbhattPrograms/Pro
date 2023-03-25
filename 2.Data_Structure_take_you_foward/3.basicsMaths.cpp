#include <bits/stdc++.h>
using namespace std;
// 1.Number of digits
int count(int n)
{
    int c;
    while (n > 0)
    {
        int last_digit = n % 10;
        c = c + 1;
        n = n / 10;
    }
    return c;
}
// 2.Reverse Number
int reverseNumber(int n)
{
    int revN = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        revN = (revN * 10) + last_digit;
    }
    return revN;
}
// 3. palindrome
void ispalindrome(int n)
{
    int dupN = n;
    int revN = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        revN = (revN * 10) + last_digit;
    }
    if (dupN == revN)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
// 4. Armstrong
void isArmstrong(int n)
{
    int sum = 0;
    int dupN = n;
    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        sum = sum + (last_digit * last_digit * last_digit);
    }
    if (dupN == sum)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
// 5.Divisors
void PrintAllDivisor(int n)
{ // A. only by using  loops
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
    // B.Only by using vectors
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *(it) << " ";
    }
    // C. Only by using Priority_queue
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            pq.push(i);
            if ((n / i) != i)
            {
                pq.push((n / i));
            }
        }
    }
    while (!pq.empty())
    {
        cout << ' ' << pq.top();
        pq.pop();
    }
}
// 6.primeNumber
void CheckPrime(int n)
{
    int ct = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         ct++;
    //     }
    // }
    // if (ct == 2)
    // {
    //     cout << "Prime" << endl;
    // }
    // else
    // {
    //     cout << "Not Prime" << endl;
    // }
    // int ct = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ct++;
            if ((n / i) != i)
            {
                ct++;
            }
        }
    }
    if (ct == 2)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}
// 7.greatest Common Integer
void gcd(int n1, int n2)
{
    int number = 1;
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            number = i;
            break;
        }
    }
    cout << number << endl;
}
//Equilateral Algorithm
// gcd(a,b)=gcd(a-b,b); if a>b ; till one of them is 0
// gcd(a,b)=gcd(a%b,b); if a>b ; till one of them is 0 ; other is gcd 

void gcdFaster(int n1, int n2)
{
    while (n1>0&&n2>0)
    {
        if (n1>n2)
        {
            n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
        
    }
    if (n1==0)
    {
        printf("%d",n2);
    }else
    {
        printf("%d",n1);
    }
    // time complexity -> O(logphi(min(a,b));)
}


int main()
{

    cout << count(232) << endl;
    cout << reverseNumber(45986) << endl;
    // n=128;
    // revN=0;
    // iteration=1;
    // lastD=n%10=8;
    // n=128/10=12;
    // revN=0*10+8=8;
    // iteration=2;
    // lastD=n%10=2;
    // n=12/10=1;
    // revN=8*10+2=82;
    // iteration=3;
    // lastD=1%10=1;
    // n=1/10=0;
    // revN=82*10+1=821;

    // reverse number =821;

    ispalindrome(121);
    isArmstrong(371);
    PrintAllDivisor(36);
    cout << endl;
    CheckPrime(17);
    gcd(40, 20);
    gcdFaster(40,20);


    return 0;
}