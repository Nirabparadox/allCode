#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<long long, int> fre; 
    int l = 0, r = 0;
    long long seg = 0;
    while (r < n) {
        fre[v[r]]++;
        while (fre.size() > k) {
            fre[v[l]]--;
            if (fre[v[l]] == 0) {
                fre.erase(v[l]); 
            }
            l++;
        }
        seg += (r - l + 1);
        r++;
    }
    cout << seg;
    return 0;
}
