#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    float mypoint = 0, oppositePoint = 0;
    cin>>x>>y>>z;
    mypoint += (x*1) + (y*0.5);
    oppositePoint += (y*0.5) + (z*1);
    int totalmatch = x+y+z;
    if(totalmatch != 4){
        mypoint += (4-totalmatch) * 1;
    }
        if(mypoint > oppositePoint){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    return 0;
}