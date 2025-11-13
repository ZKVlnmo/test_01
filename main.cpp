#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, w;
};


sfdfdsf
dsfsdfs
sfsd
int main() {
    int n, m;
    cin >> n >> m;

    vector<Edge> edges(m);
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
jl;jkll;ljm;lkj;;loiu
    // Сортировка рёбер по весу
    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.w < b.w;
    });

    // Инициализация DSU
    for (int i = 0; i < n; i++) parent[i] = i;

    int totalWeight = 0;
    for (auto e : edges) {
        int rootU = find(e.u);
        int rootV = find(e.v);
        if (rootU != rootV) {
            parent[rootU] = rootV;
            totalWeight += e.w;
        }
    }

    cout << "Вес минимального остовного дерева: " << totalWeight << endl;

    return 0;
}