#include<bits/stdc++.h> 
using namespace std;
int main(){
    long long n,s;
    cin>>n>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l = 0 , r = 0;
    long long totalsum = 0 , totalseg = 0;
    while(r<n){
        totalsum += v[r];
        if(totalsum<=s){
            totalseg += (r-l+1);
        }
        else{
            while(totalsum>s && l<r){
                totalsum-=v[l];
                l++;
            }
            if(totalsum<=s){
                totalseg+=(r-l+1);
            }
            
        }
        r++;
        
    }
    cout<<totalseg<<'\n';
    return 0;
}