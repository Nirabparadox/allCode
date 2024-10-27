#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> v;
    map<string,int> mp;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string a;
        getline(cin,a);
        if(mp[a] != 1){
             v.push_back(a);
             mp[a] = 1;
        }
    }
    cout<<v.size()<<endl;
    return 0;
}