
// Now this is a Vector

#include <bits/stdc++.h>
using namespace std;

void printvecto(vector<int> &v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    // crate a vector and call by array

    vector<int> v;
    // int n = 6;
    // int x = 1;

    // for (int i = 0; i < n; i++)
    // {

    //     x += 1;

    //     v.push_back(x);
    // }

    v.push_back(5);
    v.push_back(8);
    v.push_back(7);
    v.push_back(9);

    vector<int> v2 = v;

    v2.push_back(6);

    printvecto(v);
}