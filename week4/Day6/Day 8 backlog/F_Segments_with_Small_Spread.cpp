#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long k;
    cin>>k;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long totalseg = 0;
    int l=0,r=0;
    multiset<long long> mlt;
    while (r<n)
    {
        mlt.insert(v[r]);
        long long min = *mlt.begin() , max = *mlt.rbegin();
        if(max - min <= k){
            totalseg+=(r-l+1);
        }
        else{
            while (l<=r)
            {
                 min = *mlt.begin(),max = *mlt.rbegin();
                 if(max-min<=k){
                    break;
                 }
                 else{
                    mlt.erase(mlt.find(v[l]));
                    l++;
                 }
            
            }
            min = *mlt.begin(),max = *mlt.rbegin();
            if(max-min<=k){
                totalseg += (r-l+1);
            }
            
        }
        r++;
    }
    cout<<totalseg<<'\n';
    
    return 0;
}