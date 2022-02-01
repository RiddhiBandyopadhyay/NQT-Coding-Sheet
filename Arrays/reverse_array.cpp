#include<bits/stdc++.h>
using namespace std;

void rev(vector<int>&vec){
    int p1 = 0, p2 = vec.size() - 1;
    for(int i=0;i<vec.size();i++){
        while(p1<p2){
            swap(vec[p1], vec[p2]);
            p1++;
            p2--;
        }
    }
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

    rev(vec);
    cout<<"After reversing : "<<endl;
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}