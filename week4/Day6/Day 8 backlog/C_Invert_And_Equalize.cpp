#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c10 = 0 , c01 = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                c01++;
            }
            else if(s[i]=='1' && s[i+1]=='0'){
                c10++;
            }
        }
        if(s[0]=='0'){
            c10++;
        }
        else{
            c01++;
        }
        cout<<min(c10,c01)<<'\n';
        
    }
    
    return 0;
}