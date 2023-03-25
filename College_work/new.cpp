#include <bits/stdC++.h>
using namespace std;

vector<int> Union(int a[], int b[], int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> unionArray;
    while (i < n && j < m)
    {
        if (a[i] <=b[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != a[i])
            {
                unionArray.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != b[j])
            {
                unionArray.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n)
    {
        if (unionArray.back() != a[i])
        {
            unionArray.push_back(a[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (unionArray.size() == 0 || unionArray.back() != b[j])
        {
            unionArray.push_back(b[j]);
        }
        j++;
    }

    return unionArray;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int b[] = {4, 5, 6, 7, 8, 9, 10};
    vector<int> answer = Union(a, b, 7, 7);
    for(auto it:answer){
        cout<<it<<" ";
    }
    return 0;
}