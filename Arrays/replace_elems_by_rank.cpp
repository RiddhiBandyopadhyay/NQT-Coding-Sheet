#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums)
{
    vector<int> dummy;
    unordered_map<int, int> mpp;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        dummy.push_back(nums[i]);
    }

    int rank = 1;
    sort(dummy.begin(), dummy.end());
    for (int i = 0; i < dummy.size(); i++)
    {
        if(mpp[dummy[i]] == 0){
            mpp[dummy[i]] = rank;
            rank++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = mpp[nums[i]];
    }

    for (int i = 0; i < dummy.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;
        nums.push_back(el);
    }

    solve(nums);

    return 0;
}