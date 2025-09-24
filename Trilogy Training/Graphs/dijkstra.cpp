#include<bits/stdc++.h>
using namespace std;

// typedef specifiers
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef unordered_set<int> usi;
typedef pair<int, int> pii;
typedef pair<int, vvi> pivvi;
typedef pair<int, usi> piusi;
typedef unordered_map<int, int> umii;
typedef unordered_map<int, bool> umib;
typedef pair<int, umii> piumii;
typedef unordered_map<int, umii> umiumii;
typedef unordered_map<int, usi> umiusi;

// macros
#define forn(i,n) for(int i = 0 ; i<n ; i++)

void print_dist(vi &arr) {
    map<int, int> map_index;
    for(int i = 1; i < arr.size(); i++) {
        map_index[arr[i]] = i;
    }
    for(const pii &row: map_index) {
        cout << row.second << " "; 
    }
}

umiumii make_adj_list_ud_w(pivvi graph) {
    umiumii adj_list;
    for(int i = 1; i <= graph.first; i++) {
        adj_list[i] = umii();
    }
    for(const vi &edge: graph.second) {
        adj_list[edge[0]][edge[1]] = edge[2];
        adj_list[edge[1]][edge[0]] = edge[2];
    }
    return adj_list;
}

int find_closest_vertex(vi &min_dists, vb &finalised) {
    int shortest_dist = -1, min_dist = INT_MAX;
    
    for(int i = 1; i <= min_dists.size(); i++) {
        if(min_dists[i] < min_dist && !finalised[i]) {
            min_dist = min_dists[i];
            shortest_dist = i;
        }    
    }
    return shortest_dist;
}

// vi dijkstra(int V, vvi &edges, int src) {
//     // Code here
//     vi min_dists(V+1, INT_MAX);
//     vb finalised(V+1, false);
    
//     umiumii adj_list = make_adj_list_ud_w({V, edges});
//     min_dists[src] = 0;
    
//     for(int i = 1; i <= V; i++) {
//         int closest_vertex = find_closest_vertex(min_dists, finalised);
//         finalised[closest_vertex] = true;
        
//         for(const pii &row: adj_list[closest_vertex]) {
//             int neighbor = row.first, weight = row.second;
//             if(min_dists[closest_vertex] + weight < min_dists[neighbor] && !finalised[neighbor]) {
//                 min_dists[neighbor] = min_dists[closest_vertex] + weight;
//             }
//         }
//     }
    
//     return min_dists;
// }

vi dijkstra(int V, vvi &edges, int src) {
    vi min_dists(V, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    umiumii adj_list = make_adj_list_ud_w({V, edges});
    
    min_dists[src] = 0;
    pq.push({0 , src});
    
    while(!pq.empty()) {
        int weight = pq.top().first;
        int curr = pq.top().second;
        
        pq.pop();
        
        for(auto &row: adj_list[curr]) {
            if(row.second + weight < min_dists[row.first]) {
                min_dists[row.first] = row.second + weight;
                pq.push({min_dists[row.first], row.first});
            }
        }
    }
    return min_dists;
}

// Building dummy graph for testing
pivvi dummy_graph() {
    // int v = 7;
    // vvi edges({{1, 2}, {1, 3}, {1, 4}, {2, 5}, {3, 6}, {4, 5}, {5, 6}});
    // vvi edges_w({{1, 2, 3}, {1, 3, 7}, {1, 4, 8}, {2, 5, 1}, {3, 6, 3}, {4, 5, 6}, {5, 6, 9}});
    // pivvi graph1 = {v, edges};
    // pivvi graph_w = {v, edges_w};
    // // return graph1;
    // return graph_w;

    int v = 5;
    vvi edges_w({{0,1,4}, {0,2,8}, {1,4,6}, {2,3,2}, {3,4,10}});
    return {v, edges_w};
}

// Playing with different types of graphs
void playing_with_graphs() {
    int v, e;
    cin >> v >> e;
    vvi edges(e, vi(3));
    for(int i = 0; i < e; i++) {
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }
    vi min_dists = dijkstra(v, edges, 1);
    print_dist(min_dists);
}

void solve() {
    playing_with_graphs();
}

int main(){
    solve();
    return 0;
}

// 5 6 
// 1 2 2
// 2 5 5
// 2 3 4
// 1 4 1
// 4 3 3 
// 3 5 1