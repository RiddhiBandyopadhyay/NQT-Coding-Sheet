#include <bits/stdc++.h>
using namespace std;

void findSymmetric(vector<pair<int, int>> vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(vec[i].first == vec[j].second and vec[i].second == vec[j].first){
                cout<<"("<<vec[i].second<<","<<vec[i].first<<") ";
                break;
            }
        }
    }
}

int main()
{
    int n = 0;
    cin >> n;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        int f, s;
        cin >> f >> s;
        vec.push_back(make_pair(f, s));
    }

    findSymmetric(vec, n);
    return 0;
}