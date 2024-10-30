#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n,m;
    cin>>n>>m;
    map<string , string> mp;
    while(n--){
        string name,ip;
        cin>>name>>ip;
        mp[ip] = name;
    }
    while(m--){
        string command , ip;
        cin>>command>>ip;
        ip.erase(ip.begin() + (ip.size() - 1));
        cout<<command<<" "<<ip<<";"<<" "<<"#"<<mp[ip]<<endl;

    }
    return 0;
}