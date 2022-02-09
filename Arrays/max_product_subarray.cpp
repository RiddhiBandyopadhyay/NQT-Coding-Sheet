#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int mx = ans;
        int mi = ans;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i] < 0){
                swap(mx, mi);
            }
            
            mx = max(nums[i], nums[i]*mx);
            mi = min(nums[i], nums[i]*mi);
            ans = max(ans, mx);
        }
        
        return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int>nums;

    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        nums.push_back(el);
    }

    cout<<maxProduct(nums)<<endl;

    return 0;
}