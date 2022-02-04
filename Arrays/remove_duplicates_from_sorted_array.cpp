#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        int i = 0;
        for(int j = 1 ; j < n ; j++){
            if(nums[i] != nums[j])
                i++;
            nums[i] = nums[j];
        }
        
        return i + 1;
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

    sort(arr.begin(), arr.end());
    removeDuplicates(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}