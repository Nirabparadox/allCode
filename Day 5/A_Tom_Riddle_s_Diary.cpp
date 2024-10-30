#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string ,int> mp;
    while(n--){
        string name;
        cin>>name;
        if(mp[name] >= 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        mp[name]++;
        
    }
    
    return 0;
}
