#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool issorted(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}
int main () {
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        if(is_sorted(v.begin(),v.end())|| k>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
return 0;
}