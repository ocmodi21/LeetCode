#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> m;
    for (auto i : nums)
        m[i]++;
    for (auto x : m)
    {
        if (x.second == 1)
            return x.first;
    }
    return -1;
}