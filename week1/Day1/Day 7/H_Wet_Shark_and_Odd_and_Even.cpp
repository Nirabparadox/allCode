#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long  n;
    cin>>n;
    int odd = 0 ;
    long long  s = 0;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
       int a; 
       cin>>a;
       if(a%2 != 0){
        odd++;
        if(min>a){
            min = a;
        }
       }
       s += a;
    }
   
    if(odd%2 == 0){
        cout<<s;
    }
    else{
        cout<<(s-=min);
    }
    return 0;
}