#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        int first = arr[i][0];
        int second = arr[i][1];

        if (mpp.find(second) != mpp.end() and mpp[second] == first)
        {
            cout << "(" << first << "," << second << ") ";
        }
        else
        {
            mpp[first] = second;
        }
    }

    return 0;
}