#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int coin = 0;
   for(int i=1;i<=2;i++){
        if(a>=b){
            coin += a;
            a--;
        }
        else{
            coin += b;
            b--;
        }
   }
   cout<<coin;

    return 0;
}