#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&vec){
    int n = vec.size();
    sort(vec.begin(), vec.end());
    int mid = n/2;
    reverse(vec.begin() + mid, vec.end());
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;
        vec.push_back(el);
    }

    solve(vec);

    cout<<"Ans : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}