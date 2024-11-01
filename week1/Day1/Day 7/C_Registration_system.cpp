#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string , int> name;
    while(n--){
        string request;
        cin>>request;
        if(name[request] == 0){
            cout<<"OK"<<"\n";
        
        }
        else{
            cout<<request<<name[request]<<"\n";
        }
        name[request]++;

    }
    return 0;
}