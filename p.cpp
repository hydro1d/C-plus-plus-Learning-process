#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void constructPermutation(vector<int>& a, vector<int>& p) {
    int n = a.size();
    unordered_set<int> s;
    for (int i = 0; i < n; ++i) {
        p[i] = i;
        s.insert(i);
    }

    int mex = 0;
    for (int i = 0; i < n; ++i) {
        if (s.count(a[i]) > 0) {
            p[i] = a[i];
            s.erase(a[i]);
        } else {
            while (s.count(mex) == 0) {
                ++mex;
            }
            p[i] = mex;
            s.erase(mex);
            ++mex;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> p(n);
        constructPermutation(a, p);

        for (int i = 0; i < n; ++i) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
