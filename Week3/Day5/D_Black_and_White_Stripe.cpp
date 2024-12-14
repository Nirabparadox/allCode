#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l = 0 , r = 0;
        int count = 0;
        int total = INT_MAX;
        if(n==1){
            if(s[l]=='W'){
                cout<<"1"<<'\n';
            }
            else{
                cout<<"0"<<'\n';
            }
        }
        else{

        
        while (r!=n)
        {
           if(s[r]=='W'){
            count++;
           }
           if(r-l+1 == k){
            if(total>count){
                total = count;
                
            }
            if(s[l]=='W'){
                count--;
            }
            l++,r++;
           }
           else{
            r++;
           }
        }
        cout<<total<<'\n';

        }
        
        
    }
    return 0;
}