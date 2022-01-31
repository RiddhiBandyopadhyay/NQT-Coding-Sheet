#include <bits/stdc++.h>
using namespace std;

// 5 6 8 1 2 4

int findSecondSmallest(vector<int>arr){
    int small = INT_MAX;
    int second_small = INT_MAX;

    for(int i=0;i<arr.size();i++){
        if(arr[i] < small){
            second_small = small;
            small = arr[i];
        }
        else if(arr[i] < second_small and arr[i] != small){
            second_small = arr[i];
        }
    }

    return second_small;
}

int findSecondsLargest(vector<int>arr){
    int big = INT_MIN;
    int second_big = INT_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i]> big){
            second_big = big;
            big = arr[i];
        }
        else if(arr[i] > second_big and arr[i] != big){
            second_big = arr[i];
        }
    }

    return second_big;
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

    cout<<"The second smallest : "<<findSecondSmallest(arr)<<endl;
    cout<<"The second largest : "<<findSecondsLargest(arr)<<endl;

    return 0;
}