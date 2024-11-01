#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<pair<char,int>> lowcase,uppcase;
        bool flag = false;
        string ne = s;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'B'){
                ne[i] = '1';
                if(i>=0){
                    if(!uppcase.empty()){
                        pair<char,int> value = uppcase.top();
                        uppcase.pop();
                        int ind = (value.second);
                        ne[ind] = '1';
                    }
                }
                
            }
            else if(s[i] == 'b'){
                ne[i] = '1';
                if(!lowcase.empty()){
                        pair<char,int> value = lowcase.top();
                        lowcase.pop();
                        int ind = (value.second);
                        ne[ind] = '1';
                    }
            }
            else{
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    uppcase.push({s[i] , i});
                }
                else{
                    lowcase.push({s[i] , i});
                }
            }
            
            
        }
        for(char letter : ne){
            if(letter != '1'){
                cout<<letter;
            }
        }
        cout<<'\n';
    }
    return 0;
}