#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int first = -1;
        int last = -1;
        for(int i=0;i<n;i++){
            if(s[i] == 'B'){
                first = i;
                break;
            }
            
        }
        for(int i=0;i<n;i++){
            if(s[i] == 'B'){
                last = i;
            }
        }
        if(first == -1){
            cout<<'0'<<endl;
        }
        else{
            int total = (last - first) + 1;
            cout<<total<<endl;
        }
    }
    return 0;
}