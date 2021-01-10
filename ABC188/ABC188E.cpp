#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v); // 再帰的に探索
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> X(N);
    vector<int> Y(N);
    vector<vector<int>> graph(N);
    set<int> start;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        X[i] = x - 1;
        Y[i] = y - 1;
        start.insert(x-1);
        graph[x-1].emplace_back(y-1);
    }

    int max = -99999999;

    for (auto c: start) {
        // cout << "c = " << c << endl;
        seen.assign(N, false);
        dfs(graph, c);
        for (int i = 0; i < N; i++) {
            if (i == c) continue;
            if (seen[i]) {
                int tmp = A[i] - A[c];
                // cout << "  " << tmp << endl;
                if (max < tmp) max = tmp;
            }
        }
    }

    cout << max << endl;

    return 0;
}