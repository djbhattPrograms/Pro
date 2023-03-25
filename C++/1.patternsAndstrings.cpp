#include <bits/stdc++.h>
using namespace std;

// string hello(string name){
//     return ("HI "+ name);
// }
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < n - i - 1; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        for (int l = 0; l < i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print12(int n){
    int spaces=2*(n-1);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        for (int j = 1; j <=spaces; j++)
        {
            cout<<" ";
        }
        for (int j = i; j >=1; j--)
        {
            cout<<j;
        }

        cout<<endl;
        spaces-=2;
        
        
    }
    

}
void print13(int n){
    int num =1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
    
}
//char looping
void print14(int n){
    for (int i = 1; i <= n; i++)
    {
        for (char chr='A'; chr < 'A'+i; chr++)
        {
            cout<<chr<<" ";
        }
        cout<<endl;
        
    }
    
}
void print15(int n){
    for (int i = 1; i <=n; i++)
    {
        for (char chr='A';chr<='A'+(n-i);chr++)
        {
            cout<<chr<<" ";
        }
        cout<<endl;
    }
    
}
void print16(int n){
    for (int i = 0; i < n; i++)
    {
        char chr='A'+i;
        for (int j = 0; j <= i; j++)
        {
            cout<<chr<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    //     string str;
    //     getline(cin, str);
    //     cout << str;
    // int n;
    // cout << "Enter no. of guest" << endl;
    // cin>>n;
    // string arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter Name of guest" << endl;
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    // cout<<hello("debraj");

    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int rows;
        cin >> rows;
        print16(rows);

    }

    return 0;
}