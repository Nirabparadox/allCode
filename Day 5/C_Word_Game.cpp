#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        map<string,int> mp;
        int n;
        cin>>n;
        string arr[3][n];
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
            string a;
            cin>>a;
            arr[i][j] = a;
            mp[a]++;

           }
        }
        for(int i=0;i<3;i++){
            int man = 0;
            for(int j=0;j<n;j++){
                if(mp[arr[i][j]] < 3){
                    if(mp[arr[i][j]] == 1){
                        man += 3;
                    }
                    else{
                        man += 1;
                    }
                }


            }
            cout<<man<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}