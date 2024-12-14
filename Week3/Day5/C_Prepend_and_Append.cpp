#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0,r=n-1;
        while(l!=r && l<r){
            if(s[l]!=s[r]){
                l++,r--;
                n-=2;
            }
            else{
                break;
            }
        }
        cout<<n<<'\n';
    }
    return 0;
}