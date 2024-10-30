#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size() == 1){
            if(s[0] == 'z'){
                s.insert(s.begin(),(s[0]-1));
            }
            else{
                s.insert(s.begin(),(s[0]+1));
            }
        }
        else{
            bool flag = true;
            for(int i=0;i<s.size()-1;i++){
                if(s[i] == s[i+1]){
                    if(s[i] == 'z'){
                        s.insert(s.begin()+(i+1),(s[i]-1));
                        flag = false;
                    }
                    else{
                        s.insert(s.begin()+(i+1),(s[i]+1));
                        flag = false;
                    }
                    break;
                }
            }
            if(flag){
                if(s[s.size()-1] == 'z'){
                    s.insert(s.end() , (s[s.size()-1]-1));
                }
                else{
                    s.insert(s.end() , (s[s.size()-1]+1));
                }
            }
        }
        cout<<s<<endl;
        
    }
    return 0;
}