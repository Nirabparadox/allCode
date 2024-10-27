#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int high = n-1;
    int low =0;
    long long int sereja = 0;
    long long int dima = 0;
    bool arr[1001];
    memset(arr,false,sizeof(arr));
    while(high >= low){
        if(v[high]  >= v[low] && arr[v[high]] == false){
            sereja = sereja + v[high];
            arr[v[high]] = true;
            high--;
        }
        else if(v[low] > v[high] && arr[v[low]] == false){
            sereja = sereja + v[low];
            arr[v[low]] = true;
            low++;
        }
        if(high >= 0){
        if(v[high] >= v[low] && arr[v[high]] == false){
            dima = dima + v[high];
            arr[v[high]] = true;
            high--;
        }
        else if(v[low] > v[high] && arr[v[low]] == false){
            dima = dima + v[low];
            arr[v[low]] = true;
            low++;
        }
    }
    }
    cout<<sereja<<" "<<dima;
    return 0;
}