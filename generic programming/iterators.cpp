#include <bits/stdc++.h>
using namespace std;

template <class ForwardIterator, class T>

ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{
    while (start != end)
    {
        /* code */
        if (*start == key)
            return start;
    }
    start++;
}

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);

    auto it = search(l.begin(), l.end(), 5);
    if(it==l.end()){
        cout << "element is not present" << endl;
    } else {
        cout << *it << endl;
    }
}