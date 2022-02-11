#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>vec1, vector<int>vec2){
    unordered_map<int, int>mpp;
    for(int i=0;i<vec1.size();i++){
        mpp[vec1[i]]++;
    }

    int count = 0;
    for(int i=0;i<vec2.size();i++){
        if(mpp[vec2[i]])
            count++;
    }

    if(count == vec2.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int n,m;
    cout<<"Enter the size of the first and second array : "<<endl;
    cin>>n>>m;
    vector<int>vec1;
    vector<int>vec2;

    cout<<"Enter elements in 1st array : "<<endl;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        vec1.push_back(el);
    }
    cout<<"Enter elements in 2nd array : "<<endl;
    for(int i=0;i<m;i++){
        int el;
        cin>>el;
        vec2.push_back(el);
    }

    solve(vec1, vec2);

    return 0;
}