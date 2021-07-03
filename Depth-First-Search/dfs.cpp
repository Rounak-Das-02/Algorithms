#include <bits/stdc++.h>

using namespace std;


class graph {
    public: 

        map <int, list<int>> adj;
        vector <int> blank;
        map <int, int>colour;

        void dfs(int v);

        void addEdge(int v, int w){
            adj[v].push_back(w);
        }

    };

void graph::dfs(int vertex){

    colour[vertex] = 1;

    cout << vertex << endl;

    for(auto i = adj[vertex].begin() ; i != adj[vertex].end() ; i++){
        if(colour[*i] == 0){
            dfs(*i);
        }
    }


}

int main(){

    graph g;

    g.addEdge(0, 1);
    g.addEdge(0, 9);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(9, 3);
    
    g.dfs(2);
    return 0;
}