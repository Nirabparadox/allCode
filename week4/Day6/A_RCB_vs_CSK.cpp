#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    if(x-y >= 18){
        cout<<"RCB";
    }
    else{
        cout<<"CSK";
    }
    return 0;
}