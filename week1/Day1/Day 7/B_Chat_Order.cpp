#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string , int> name;
    stack<string> s;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        name[a]++;
        s.push(a);
    }
    while(!s.empty()){
        if(name[s.top()] > 0){
            cout<<s.top()<<"\n";
            name[s.top()] = 0;
        }
        s.pop();
    }
    return 0;
}