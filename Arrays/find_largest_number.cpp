#include <bits/stdc++.h>
using namespace std;

// 5 6 8 1 2 4

//Bruteforce solution for this problem will be, 1st we will sort the array and then will return the 'last' index

int findbiggest(vector<int> arr)
{
    int biggest = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > biggest)
            biggest = arr[i];
    }

    return biggest;
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;
        arr.push_back(el);
    }

    int ans = findbiggest(arr);

    cout << "biggest : " << ans;

    return 0;
}