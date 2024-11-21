#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x==0 || y==0) || (x%3==0 || y%3==0)){
            cout<<"0"<<endl;
        }
        else{
            if(x>y){
                cout<<x%3<<endl;
            }
            else{
                cout<<y%3<<endl;
            }
        }
    }
    return 0;
}