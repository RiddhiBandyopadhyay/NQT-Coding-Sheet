#include<bits/stdc++.h>
using namespace std;

void rev(vector<int>&vec, int m){
    if(m == 0){
        return;
    }

    int temp = vec[m-1];
    vec.pop_back();
    rev(vec, m-1);
    vec.insert(vec.begin(), temp);
}

int main(){
    int n;
    cin>>n;
    vector<int>vec(n);

    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        vec.push_back(el);
    }

    rev(vec, n);
    cout<<"After reversing : "<<endl;
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}