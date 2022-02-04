#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    cout<<"Sum of all the elements in the array : "<<sum;

    return 0;
}