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

// ADJACENCY MATRIX

// Undirected Unweighted Graph
vvb make_adj_matrix_ud_uw(pivvi &graph) {
    vvb adj_matrix(graph.first, vb(graph.first));
    for(vi &edge: graph.second) {
        adj_matrix[edge[0]][edge[1]] = adj_matrix[edge[1]][edge[0]] = true;
    }
    return adj_matrix;
}

// Directed Unweighted Graph
vvb make_adj_matrix_d_uw(pivvi &graph) {
    vvb adj_matrix(graph.first, vb(graph.first));
    for(vi &edge: graph.second) {
        adj_matrix[edge[0]][edge[1]] = true;
    }
    return adj_matrix;
}

// Undirected Weighted Graph
vvi make_adj_matrix_ud_w(pivvi &graph_w) {
    vvi adj_matrix(graph_w.first, vi(graph_w.first));
    for(vi &edge: graph_w.second) {
        adj_matrix[edge[0]][edge[1]] = adj_matrix[edge[1]][edge[0]] = edge[2];
    }
    return adj_matrix;
}

// Directed Weighted Graph
vvi make_adj_matrix_d_w(pivvi &graph_w) {
    vvi adj_matrix(graph_w.first, vi(graph_w.first));
    for(vi &edge: graph_w.second) {
        adj_matrix[edge[0]][edge[1]] = edge[2];
    }
    return adj_matrix;
}

// Printing Unweighted Adjacency Matrix
void print_adj_matrix(vvb &adj_matrix_uw) {
    for(vb &v: adj_matrix_uw) {
        for(bool val: v) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

// Printing Weighted Adjacency Matrix
void print_adj_matrix(vvi &adj_matrix_w) {
    for(vi &v: adj_matrix_w) {
        for(int val: v) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

// ADJACENCY LIST

// Initialize Adjacency List for Unweighted Graphs
void initialize_adj_list(umiusi &adj_list_uw, int v) {
    for(int i = 0; i < v; i++) {
        adj_list_uw[i] = usi();
    }
}

// Initialize Adjacency List for Weighted Graphs
void initialize_adj_list(umiumii &adj_list_w, int v) {
    for(int i = 0; i < v; i++) {
        adj_list_w[i] = umii();
    }
}

// Undirected Unweighted Graph
umiusi make_adj_list_ud_uw(pivvi &graph) {
    umiusi adj_list;
    initialize_adj_list(adj_list, graph.first);
    for(vi &edge: graph.second) {
        adj_list[edge[0]].insert(edge[1]);
        adj_list[edge[1]].insert(edge[0]);
    }
    return adj_list;
}

// Directed Unweighted Graph
umiusi make_adj_list_d_uw(pivvi &graph) {
    umiusi adj_list;
    initialize_adj_list(adj_list, graph.first);
    for(vi &edge: graph.second) {
        adj_list[edge[0]].insert(edge[1]);
    }
    return adj_list;
}

// Undirected Weighted Graph
umiumii make_adj_list_ud_w(pivvi &graph) {
    umiumii adj_list;
    initialize_adj_list(adj_list, graph.first);
    for(vi &edge: graph.second) {
        adj_list[edge[0]][edge[1]] = edge[2];
        adj_list[edge[1]][edge[0]] = edge[2];
    }
    return adj_list;
}

// Directed Weighted Graph
umiumii make_adj_list_d_w(pivvi &graph) {
    umiumii adj_list;
    initialize_adj_list(adj_list, graph.first);
    for(vi &edge: graph.second) {
        adj_list[edge[0]][edge[1]] = edge[2];
    }
    return adj_list;
}
 
// Printing Unweighted Adjacency List
void print_adj_list(umiusi adj_list_uw) {
    for(const pair<int, usi> &p: adj_list_uw) {
        cout << p.first << " : ";
        for(const int &key: p.second) {
            cout << key << " ";
        }
        cout << "\n";
    }
}

// Printing Weighted Adjacency List
void print_adj_list(umiumii adj_list_w) {
    for(const pair<int, umii> &p: adj_list_w) {
        cout << p.first << " : \n";
        for(const pair<int, int> &key: p.second) {
            cout << "\t" << key.first << " --> " << key.second << "\n";
        }
        cout << "\n";
    }
}

// CONVERSION

// Conversion from Adjacency matrix to list

// For Unweighted Undirected Graph
umiusi convert_adj_matrix_to_list(vvb &adj_matrix) {
    umiusi adj_list;
    initialize_adj_list(adj_list, adj_matrix.size());
    forn(i, adj_matrix.size()) {
        forn(j, adj_matrix[0].size()) {
            if(adj_matrix[i][j]) adj_list[i].insert(j);
        }
    }
    return adj_list;
}

// For Weighted Graph
umiumii convert_adj_matrix_to_list(vvi &adj_matrix) {
    umiumii adj_list;
    initialize_adj_list(adj_list, adj_matrix.size());
    forn(i, adj_matrix.size()) {
        forn(j, adj_matrix[0].size()) {
            if(adj_matrix[i][j]) adj_list[i][j] = adj_matrix[i][j];
        }
    }
    return adj_list;
}

// Conversion from Adjacency list to matrix

// For Unweighted Graph
vvb convert_adj_list_to_matrix(umiusi &adj_list) {
    vvb adj_matrix(adj_list.size(), vb(adj_list.size(), false));
    for(const piusi &row: adj_list) {
        for(const int &val: row.second) {
            adj_matrix[row.first][val] = true;
        }
    }
    return adj_matrix;
}

// For Weighted Graph
vvi convert_adj_list_to_matrix(umiumii &adj_list) {
    vvi adj_matrix(adj_list.size(), vi(adj_list.size(), 0));
    for(const piumii &row: adj_list) {
        for(const pii &val: row.second) {
            adj_matrix[row.first][val.first] = val.second;
        }
    }
    return adj_matrix;
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
    // pivvi graph1 = dummy_graph();
    // pivvi graph_w = dummy_graph();

    // ADJACENCY MATRIX

    // For undirected unweighted graph
    // vvb adj_matrix_ud_uw = make_adj_matrix_ud_uw(graph1);
    // print_adj_matrix(adj_matrix_ud_uw);

    // For directed unweighted graph
    // vvb adj_matrix_d_uw = make_adj_matrix_d_uw(graph1);
    // print_adj_matrix(adj_matrix_d_uw);

    // For undirected weighted graph
    // vvi adj_matrix_ud_w = make_adj_matrix_ud_w(graph_w);
    // print_adj_matrix(adj_matrix_ud_w);

    // For directed weighted graph
    // vvi adj_matrix_d_w = make_adj_matrix_d_w(graph_w);
    // print_adj_matrix(adj_matrix_d_w);

    // ADJACENCY LIST

    // For undirected unweighted graph
    // umiusi adj_list_ud_uw = make_adj_list_ud_uw(graph1);
    // print_adj_list(adj_list_ud_uw);

    // For directed unweighted graph
    // umiusi adj_list_d_uw = make_adj_list_d_uw(graph1);
    // print_adj_list(adj_list_d_uw);

    // For undirected weighted graph
    // umiumii adj_list_ud_w = make_adj_list_ud_w(graph_w);
    // print_adj_list(adj_list_ud_w);

    // For directed weighted graph
    // umiumii adj_list_d_w = make_adj_list_d_w(graph_w);
    // print_adj_list(adj_list_d_w);

    // CONVERSION

    // From Adjacency matrix to list

    // For unweighted graph
    // umiusi adj_list = convert_adj_matrix_to_list(adj_matrix_ud_uw);
    // print_adj_list(adj_list);

    // For weighted graph
    // umiumii adj_list = convert_adj_matrix_to_list(adj_matrix_ud_w);
    // print_adj_list(adj_list);

    // From Adjacency list to matrix

    // For unweighted graph
    // vvb adj_matrix = convert_adj_list_to_matrix(adj_list_ud_uw);
    // print_adj_matrix(adj_matrix);

    // For weighted graph
    // vvi adj_matrix = convert_adj_list_to_matrix(adj_list_ud_w);
    // print_adj_matrix(adj_matrix);
}

void solve() {
    playing_with_graphs();
}

int main(){
    solve();
    return 0;
}