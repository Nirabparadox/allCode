#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char,int> mp;
    bool flag = false;
    string s;
    cin>>s;
    for(char letter : s){
        mp[letter]++;
    }
    char alph;
    for(int i=97;i<=122;i++){
        alph = char(i);
        if(mp[alph] == 0){
            flag = true;
            break; 
        }
    }
    if(flag){
        cout<<alph;
    }
    else{
        cout<<"None";
    }
    
  

return 0;
}