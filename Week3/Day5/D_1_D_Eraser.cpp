#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l = 0,r=0;
        int count = 0;
        int total = 0;
        int con = 0;
        int b = 0;
        priority_queue<int> pq;
        while (r!=n)
        {
            if(s[r]=='B'){
                count++;
                b++;
            }
            if(r-l+1==k){
                pq.push(count);
                if(s[l]=='B'){
                    count--;
                }
                l++,r++;
            }
            else{
                r++;
            }
        }
        while (!pq.empty())
        {
            if(total >= b){
                break;
            }
            else{
                total+=pq.top();
                con++;
                pq.pop();
            }
            
        }
        cout<<con<<'\n';
        
        

    }
    
    return 0;
}