#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
            continue;
        }
        ans += s[i];
    }

    cout<<ans<<endl;
    return 0;
}