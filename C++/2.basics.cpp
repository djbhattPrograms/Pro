#include <bits/stdc++.h>
using namespace std;

void pairExplain()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, pair<int, int>>> q = {1, {2, {3, 4}}};
    cout << q.first << " " << q.second.first << " " << q.second.second.first << " " << q.second.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    cout<<arr[1].first<<endl;
}



int main()
{
    pairExplain();

    return 0;
}

