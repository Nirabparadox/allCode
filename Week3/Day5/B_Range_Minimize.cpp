#include<bits/stdc++.h>
using namespace std;
class cmp{
    public:
    bool operator()(pair<pair<int,int>,int> a , pair<pair<int,int>,int> b){
        if(a.second < b.second){
            return true;
        }
        else{
            return false;
        }

    }

};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n==3){
            cout<<"0"<<'\n';
        }
        else{
             priority_queue<pair<pair<int,int>, int> , vector<pair<pair<int,int>, int>> , cmp > pq;
             pq.push({{0,1},(v[1] - v[0]) + (v[2] - v[1])});
             pq.push({{0,n-1},(v[1] - v[0]) + (v[n-1] - v[n-2])});
             pq.push({{n-2,n-1},(v[n-1] - v[n-2]) + (v[n-2] - v[n-3])});
             pair<pair<int,int>,int> del = pq.top();
             if(del.first.first == 0 && del.first.second == n-1){
                cout<<v[n-2] - v[1]<<'\n'; 
             }
             else if(del.first.first == 0 && del.first.second == 1){
                cout<<v[n-1] - v[2]<<'\n';
             }
             else{
                cout<<v[n-3] - v[0]<<'\n';
             }
        }
       
    }
    return 0;
}