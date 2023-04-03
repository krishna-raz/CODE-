// pair two number
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // solution 1

    pair<int, string> p;
    p = {2, "krishna"};
    pair<int, string> p1 = p;
    p1.first = 55;

    cout << p1.second << endl;
    cout << p1.first << endl;

    // solution 2

    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};

    pair<int, int> p_array[3]; // this is a array size a[3]={1,3,5}
    p_array[0] = {1, 2};
    p_array[1] = {3, 4};
    p_array[2] = {5, 6};
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " ";
        cout << p_array[i].second << " " << endl;
    }
}
