#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int n;
    // cout<<"Enter the Number of element in the array"<<endl;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // //max of 10e7;
    // // so use map for greatert no.of element
    // int hash[13]={0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]]++;
    // }
    // cout<<"Number of Queries"<<endl;
    // int q;
    // cin>>q;
    // while (q--)
    // {
    //     cout<<"Number: "<<endl;
    //     int number;
    //     cin>>number;
    //     cout<<"Frequency: "<<hash[number]<<endl;

    // }



    // string s;
    // cout<<"Enter string"<<endl;
    // cin>>s;
    // int hash[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i]]++;
    // }
    // cout << "Number of Queries" << endl;
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     cout << "character: " ;
    //     char c;
    //     cin >> c;
    //     cout << "Frequency: " << hash[c] << endl;
    // }




    // int n;
    // cout << "Enter the Number of element in the array" << endl;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // map<int, int> mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     mpp[arr[i]]++;
    // }

    // for (auto it : mpp)
    // {
    //     cout << it.first << "->" << it.second << endl;
    // }
    // cout << "Number of Queries" << endl;
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     cout << "Number: " << endl;
    //     int number;
    //     cin >> number;
    //     cout << "Frequency: " << mpp[number] << endl;
    // }



    string s;
    cin>>s;
    map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    cout << "Number of Queries" << endl;
    int q;
    cin >> q;
    while (q--)
    {
        cout << "Character: " << endl;
        char c;
        cin >> c;
        cout << "Frequency: " << mpp[c] << endl;
    }

    return 0;
}