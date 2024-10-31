#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=1000;i++){
        int multiple  = c*i;
        if(multiple > b){
            cout<<"-1";
            break;
        }
        else if(multiple >= a){
            cout<<multiple;
            break;
        }
    }
    return 0;
}
// if(multiple>=a && multiple<=b){
// print multiple
// break
// }
// if(muliple>b){
// print -1
// break
// }