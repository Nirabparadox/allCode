#include<bits\stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        int l = 0, r = 0;
        vector<int> v;
        queue<int> q;
        while(r<arr.size()){
            if(arr[r]<0){
                q.push(arr[r]);
            }
            if(r-l+1 == k){
                if(!q.empty()){
                    v.push_back(q.front());
                    if(arr[l]==q.front()){
                        q.pop();
                    }
                }
                else{
                    v.push_back(0);
                    
                }
                l++,r++;
                
            }
            else{
                r++;
            }
        }
        return v;
    }
};