#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<ll> a(n);
        for (ll &x : a) cin >> x;
 
        // We select exactly one element.
        if (m == 1) {
            cout << *max_element(a.begin(), a.end()) << '
';
            continue;
        }
 
        // Max heap: maintains the smallest m-1 elements seen so far.
        priority_queue<ll> pq;
 
        ll sum = 0;
 
        // First m-1 elements
        for (int i = 0; i < m - 1; i++) {
            pq.push(a[i]);
            sum += a[i];
        }
 
        ll ans = LLONG_MIN;
 
        for (int i = m - 1; i < n; i++) {
 
            // a[i] is chosen as the m-th (last) element.
            ll score = m * a[i] - sum;
 
            ans = max(ans, score);
 
            // Add a[i] to the pool for future positions.
            // Keep only the smallest m-1 elements.
            if (a[i] < pq.top()) {
                sum -= pq.top();
                pq.pop();
 
                pq.push(a[i]);
                sum += a[i];
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}