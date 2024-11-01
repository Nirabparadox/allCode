#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        string oper = s;
        sort(oper.begin(),oper.end());
        map<char , int > mp;
        string n;
        for(int i=0;i<l;i++){
            mp[oper[i]]++;
            if(mp[oper[i]]<2){
                n.push_back(oper[i]);
            }
        }
        map<char,char> mn;
        for(int i=0;i<n.size();i++){
            mn[n[i]] = n[n.size()-(i+1)];
        }
        for(int i=0;i<l;i++){
            cout<<mn[s[i]];
        }
        cout<<"\n";
       
    }
       
    return 0;
}