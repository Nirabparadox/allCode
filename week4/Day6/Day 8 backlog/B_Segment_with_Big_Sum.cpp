#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    long long s;
    cin>>n>>s;
    vector<long long> v(n);
    long long totalsum = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long l=0,r=0;
    long long seg = INT_MAX;
    while (r<n)
    {   
        totalsum+=v[r];
        while (totalsum-v[l]>=s)
        {
            totalsum-=v[l];
            l++;
        }
        if(totalsum>=s){
            seg = min(seg,r-l+1);
        }
        
        
        r++;
    }
    
    if(seg==INT_MAX){
        cout<<"-1";
    }
    else{
        cout<<seg;
    }
    
    return 0;
}