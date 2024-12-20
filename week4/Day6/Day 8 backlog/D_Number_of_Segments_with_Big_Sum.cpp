#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, s;
    cin >> n >> s;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long totalsum = 0, count = 0;
    int l = 0 , r=0;
    while (r<n)
    {
        totalsum+=v[r];
        while (totalsum>=s)
        {
            count += n-r;
            totalsum-=v[l];
            l++;
        }
        r++;
        
       
    }
    
    

    cout << count << "\n";

    return 0;
}
