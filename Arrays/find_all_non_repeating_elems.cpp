#include <bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int> &arr)
{
    unordered_map<int, int> mpp;
    for (auto it : arr)
        mpp[it]++;

    cout << "The non-repeating elements are: ";
    for (auto it : mpp)
    {
        if (it.second == 1)
            cout << it.first << " ";
    }
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 4, 4, 5, 2};
    findRepeatingElements(arr);

    return 0;
}