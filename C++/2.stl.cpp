#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, pair<int, int>>> q = {1, {2, {3, 4}}};
    cout << q.first << " " << q.second.first << " " << q.second.second.first << " " << q.second.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    cout << arr[1].first << endl;
}
// 1.Vector
void explainVector()
{
    // same as array but it is dynamic

    vector<int> v;
    v.push_back(1);    // insert a element in the vector
    v.emplace_back(2); // same as 'push_back' but more fast

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> vect(5, 100); //  a vectror initially with 5 element of value 100 i.e. {100,100,100,100,100}

    vector<int> vect(5); // a vector intially with 5 elements of garbage values

    // iterators store the address of the particular instances

    vector<int>::iterator it = v.begin(); // v.begins() points to the first element of the vector v and store in the iterator it

    it++;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end(); // v.end() points to the {} 'this' of the vector v to access the last element of the vector do 'it--'

    // To access a element
    cout << v[0] << endl;
    cout << v.back() << ""; // last element

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    // we can decrease the notation by a key word 'auto' it automatically decides the datatype of the variable
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    for(auto it : v){
        cout<<it<<endl;
    }

    // eraseing a vector

    // {10,20,12,23,35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10,20,35}  [start,end)
    // for single element to erase
    v.erase(v.begin());

    // Insertion Function
    vector<int> v(2, 100);          //{100,100}
    v.insert(v.begin(), 300);       //{300,100,100}
    v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100} {{loction,number of element,value}}

    //{10,20}
    cout << v.size(); // 2
    // poing a element
    v.pop_back(); //{10}

    // v1-> {10,20}
    // v2-> {30,40}
    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};
    v1.swap(v2); // v1->{30,40};v2->{10,20}

    v.clear(); // erases the entire vector

    cout << v.empty(); // bool returns
}
// 2. list
void explainList()
{
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}
    // In vector we can insert a element  by 'insertion Function ' but it takes times but in list it is less
    ls.push_front(5); //{2,4,5}
}
// 3.Deque
void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(4);    //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}
    dq.pop_back();       //{3,4,1}
    dq.pop_front();      //{4,1}
    dq.back();
    dq.front();
}
// 4.stack
void explainStack()
{
    // LIFO => last in first out
    // Time Complexity-> O(1)
    stack<int> st;
    st.push(1);       //{1}
    st.push(2);       //{2,1}
    st.push(3);       //{3,2,1}
    st.push(4);       //{4,3,2,1}
    st.push(5);       //{5,4,3,2,1}
    cout << st.top(); // prints 5 "** st[2] is invalid **"

    st.pop(); // st looks {4,3,2,1}

    cout << st.size(); // 4
    cout << st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
}
// 5.Queue
void explainQueue()
{
    // FIFO -> First IN First OUT
    queue<int> q;
    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.push(3);    //{1,2,3}
    q.emplace(4); //{1,2,3,4}

    q.back() += 5;
    cout << q.back();  // prints 9
    cout << q.front(); // prints 1
    q.pop();           //{2,3,9}

    // have same functions like size,swap ,empty
}
// 6.priority queue
void explainPQ()
{
    priority_queue<int> pq;
    // maxm element at the top of order
    // Maximum Heap
    pq.push(5);     //{5}
    pq.push(2);     //{5,2}
    pq.push(8);     //{8,5,2}
    pq.emplace(10); //{10,8,5,2}
    pq.emplace(1);  //{10,8,5,2,1}
    cout << pq.top();
    pq.pop();
    // it have same function like size,swap,empty functions
    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(3);       //{3}
    pq.push(4);       //{3,4}
    pq.push(7);       //{3,4,7}
    pq.emplace(2);    //{2,3,4,7}
    cout << pq.top(); // prints 2
}
// 7.set
void explainSet()
{
    // set is sorted and unique

    set<int> st;
    st.insert(1);  //{1}
    st.emplace(2); //{1,2}
    st.insert(2);  //{1,2}
    st.insert(4);  //{1,2,4}
    st.insert(3);  //{1,2,3,4}
    st.insert(4);  //{1,2,3,4}

    // Functionality of insert in vector can be used also ,that only increases the efficiency

    set<int>::iterator it = st.begin();
    // begin(), end(), size(),empty(), swap() are also here
    //{1,2,3,4,5}
    auto it1 = st.find(3); // "it" point to 3
    auto it2 = st.find(6); // returns st.end()
    cout << *(it1);
    cout << *(it2);

    int cnt = st.count(1); // since set contains unique elements so if '1' is present then prints 1 or 0 if not present
    //{1,2,5}
    st.erase(5); // erase 5  , takes logarithm of time
    st.erase(it1);
    // here we can't use st.begin()+1
    // we use this
    // find

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(5);

    st.erase(it1, it2); // after erase {1,5} //[start,end)
    // lower_bound-> points to the index of the element
    // upper_bound -> points to the index just After the element

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}
// 8.multi-set
void explainMultiSet()
{
    // just like set but sorted and not unique
    multiset<int> ms;
    ms.insert(1);  //{ 1 }
    ms.emplace(2); //{1,2}
    ms.emplace(1); //{1,1,2}
    ms.emplace(1); //{1,1,1,2}
    ms.erase(1);   // erases all the 1s
    int cnt = ms.count(1);
    ms.erase(ms.find(1));
    // ms.erase(ms.find(1), ms.find(1) + 2);
}
// 9.Unordered_set
void explainUset()
{
    // just like set but not sorted and  unique
    unordered_set<int> st;
}
// 10.map
void explainMap()
{

    // map<key,value>mpp;
    map<int, int> mpp;
    map<pair<int, int>, int> mpp1;
    map<int, pair<int, int>> mpp2;
    // keys are unique and sorted
    // keys can be of any datatype
    mpp[1] = 2;
    mpp.insert({3, 1});
    mpp.insert({2, 4});
    mpp1[{2, 3}] = 10;

    mpp.insert({2, 4});

    // for(auto it=mpp.begin();it!=mpp.end();it++){
    //     cout<< ????<<endl;

    // }
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    auto it = mpp.find(3); // it stores the address
    // cout<<*(it).second;
}
// algorithms
void algorithms()
{
    // sort(a, a + n);
    vector<int> v;
    sort(v.begin(), v.end());
    // for a portion
    // sort(a + 2, a + 4);
    // sort(a, a + n, greater<int>);

    // my way of sorting
    // bool comp(pair<int, int> p1, pair<int, int> p2)
    // {
    //     if (p1.second < p2.second)
    //     {
    //         return true;
    //     }
    //     if (p1.second > p2.second)
    //     {
    //         return false;
    //     }
    //     // they are same
    //     p1.first > p2.second return true;
    //     return false;
    // }
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort(a, a + n, comp);

    // sort it according to second element
    // if second element is same ,then sort
    // it according to first element but in descending
}
int main()
{
    explainPair();

    return 0;
}
