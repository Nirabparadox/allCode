#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n , s;
    cin>>n>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long l = 0, r = 0;
    long long totalSum = 0 , seglen = 0;
    while(r<n){
        totalSum+=v[r];
        if(totalSum<=s){
            seglen = max(seglen,r-l+1);
        }
        else{
            totalSum-=v[l];
            l++;
        }
        r++;
        
    }
    cout<<seglen<<'\n';
    return 0;
}