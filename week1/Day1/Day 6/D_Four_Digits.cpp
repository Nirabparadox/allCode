#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n!=0){
        v.push_back(n%10);
        n = n/10;
    }
    if(v.size()!=4){
        int zero = 4-v.size();
        for(int i=1;i<=zero;i++){
            v.push_back(0);
        }
    }
    reverse(v.begin(),v.end());
    for(int val:v){
        cout<<val;
    }
    return 0;
}