#include <bits/stdc++.h>
using namespace std;

// 1 2 3 5 6

void rotateByk(vector<int>&arr, int k, int n)
{
    int j = 0;
    while (k--)
    {
        int temp = arr[n - 1];
        for (j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[j] = temp;
    }

}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int>arr;
    cout << "Enter the elements in the array : ";
    for (int i = 0; i < n; i++)
    {
        int el;
        cin >> el;
        arr.push_back(el);
    }

    rotateByk(arr, k, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}