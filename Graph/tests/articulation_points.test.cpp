#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_3_A"

#include <bits/stdc++.h>
using namespace std;

#include "../DfsTree/BridgeArticulation.h"
#include "../../template.h"

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    vector<vector<int>> g(n);
    REP(i,m) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    UndirectedDfs tree(g);
    auto res = tree.articulation_points;
    sort(res.begin(), res.end());
    for (int r : res) cout << r << '\n';
}
