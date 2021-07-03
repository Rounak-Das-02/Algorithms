#include <bits/stdc++.h>
using namespace std;

vector <int> blank;
vector <vector <int>> adj;
vector <int> visited;


void bfs(int vertex){
    vector <int> queue;
    queue.push_back(vertex);
    visited[vertex] = 1;
    while (queue.size()!=0){
        cout << vertex << endl;
        for (auto i = adj[vertex].begin() ; i < adj[vertex].end() ; i++){
            if (visited[*i]==0){
                visited[*i] = 1;
                queue.push_back(*i);
            }
        }
        queue.erase(queue.begin());
        vertex = *queue.begin();
    }

}

int main(){
    int n = 10;
    adj.assign(n+1, blank);
    visited.assign(n+1, 0);

    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[4].push_back(6);
    adj[5].push_back(6);


    bfs(1);

    return 0;
}

