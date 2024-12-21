#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a , b , n , s;
        cin>>a>>b>>n>>s;
        int total = s/n;
        int totalsum = 0;
        if(total>=a){
            totalsum = a*n;
        }
        else{
            totalsum = total*n;
        }
        if(s-totalsum <= b){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}