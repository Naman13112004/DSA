#include<bits/stdc++.h>
using namespace std;

// typedef specifiers
typedef vector<int> vi;
typedef vector<vi> vvi;
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

void initialize_adj_list(umiusi &adj_list_uw, int v) {
    for(int i = 0; i < v; i++) {
        adj_list_uw[i] = usi();
    }
}

umiusi make_adj_list_ud_uw(pivvi &graph) {
    umiusi adj_list;
    initialize_adj_list(adj_list, graph.first);
    for(vi &edge: graph.second) {
        adj_list[edge[0]].insert(edge[1]);
        adj_list[edge[1]].insert(edge[0]);
    }
    return adj_list;
}

void print_neighbors(unordered_set<int> &neighbors)
{
    unordered_set<int>::iterator itr;
    // (*itr++)
    for (itr = neighbors.begin(); itr != neighbors.end(); itr++)
    {
        cout << (*itr) << " ";
    }
    cout << "\n";
}

void print_adjacency_list(umiusi &adjacency_list) // O(V+E)
{
    // for (pair<const int, unordered_set<int>> &row : adjacency_list) // O(V)
    forn(i, adjacency_list.size())
    {
        usi neighbors = adjacency_list[i];
        cout << i << " : ";
        print_neighbors(neighbors); // O(E)
    }
}

void bfs(umiusi &adj_list, int start, vector<bool> &visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()) {
        int curr = q.front();
        cout << curr << " ";

        for(const int &neighbor: adj_list[curr]) {
            if(!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
        q.pop();
    }   
}

// Building dummy graph for testing
pivvi dummy_graph() {
    int v = 7;
    vvi edges({{1, 2}, {1, 3}, {1, 4}, {2, 5}, {3, 6}, {4, 5}, {5, 6}});
    vvi edges_w({{1, 2, 3}, {1, 3, 7}, {1, 4, 8}, {2, 5, 1}, {3, 6, 3}, {4, 5, 6}, {5, 6, 9}});
    pivvi graph1 = {v, edges};
    pivvi graph_w = {v, edges_w};
    return graph1;
    // return graph_w;
}

// Playing with different types of graphs
void playing_with_graphs() {
    pivvi graph1 = dummy_graph();
    umiusi adj_list = make_adj_list_ud_uw(graph1);
    vector<bool> visited(adj_list.size(), false);
    cout << "\n";
    int start; cin >> start;
    bfs(adj_list, start, visited);

    forn(i, visited.size()) {
        if(!visited[i]) {
            bfs(adj_list, i, visited);
        }
    }
    cout << "\n";
}

void solve() {
    playing_with_graphs();
}

int main(){
    solve();
    return 0;
}