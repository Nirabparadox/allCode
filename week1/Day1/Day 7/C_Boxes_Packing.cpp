#include<bits/stdc++.h>
using namespace std;
int main(){
    int box;
    cin>>box;
    int arr[box];
    map<int , int> mp;
    for(int i=0;i<box;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int ans = 0;
    for(int i=0;i<box;i++){
        int a = arr[i];
        if(mp[a] > ans){
            ans = mp[a];

        }
    }
    cout<<ans<<endl;
    return 0;
}