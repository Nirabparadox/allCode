#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        if(n>1 && n%2==0){
            cout<<"YES"<<'\n';
               for(int i=1;i<=n;i++){
                s.push_back('A');
                s.push_back('A');
                i+=1;
                if(i<n){
                    s.push_back('B');
                    s.push_back('B');
                    i+=2;
                }
               }
               cout<<s<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}