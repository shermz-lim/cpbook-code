#include <bits/stdc++.h>
#include <tuple>

using namespace std;

int main() {
    tuple<int, int, string> tup1(1, 2, "abc");
    tuple<int, int, int> tup2;
    tup2 = make_tuple(1, 2, 3);

    cout << get<0>(tup1) << endl; // 1
    int &i = get<0>(tup1);
    i = 10;
    cout << get<0>(tup1) << endl; // 10

    cout << get<0>(tup2) << endl; // 1
    int j = get<0>(tup2);
    j = 10;
    cout << get<0>(tup2) << endl; // 1
}
