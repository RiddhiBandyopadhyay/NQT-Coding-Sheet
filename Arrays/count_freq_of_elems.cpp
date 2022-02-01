#include<bits/stdc++.h>
using namespace std;

void countFreq(vector<int>&vec){
    int n = vec.size();
    if(n == 0)
        return;
    unordered_map<int, int>mpp;
    int count = 0;
    for(int i=0;i<n;i++){
        mpp[vec[i]]++;
    }

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //<--------- BRUTEFORCE---------->
    // vector<bool> visited(n, false);
 
    // for (int i = 0; i < n; i++) {
 
    //     // Skip this element if already processed
    //     if (visited[i] == true)
    //         continue;
 
    //     // Count frequency
    //     int count = 1;
    //     for (int j = i + 1; j < n; j++) {
    //         if (vec[i] == vec[j]) {
    //             visited[j] = true;
    //             count++;
    //         }
    //     }
    //     cout << vec[i] << " " << count << endl;
    // }
}

int main(){
    int n;
    cin>>n;
    vector<int>vec;

    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        vec.push_back(el);
    }

    countFreq(vec);

    return 0;
}