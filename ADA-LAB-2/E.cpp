#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

void dfs(int node, unordered_map<int, vector<int>> &map, int destination, int &count, vector<bool> &RoomsVisited, vector<int> &path, vector<bool> &selfLoops,vector<int> &paths) {
    if (node == destination) {
        // Check if the current node is in self-loops
        if (paths[node-1] ==  -1) {
            count = -1; // Marking as infinite paths if a self-loop is found
            return;
        }
        if(selfLoops[node]){
          count = -1;
          return;
        }
        count++;
        return;
    }
    RoomsVisited[node - 1] = true; // Mark the current room as visited
    path.push_back(node); // Push current node into the path

    vector<int> adjNeighbours = map[node];

    for (int neighbour : adjNeighbours) {
        if (!RoomsVisited[neighbour - 1]) {

            dfs(neighbour, map, destination, count, RoomsVisited, path, selfLoops,paths);

        }
    }

    RoomsVisited[node - 1] = false; // Mark the current room as unvisited after exploring its neighbours
    path.pop_back(); // Pop the current node from the path
}

void printPathCount(int source, int destination, int count) {
    if (count <= -1) {
        cout << -1 << " ";
    } else {
        cout << count << " ";
    }
}

int findPathsFromUtoV(int source, int destination, unordered_map<int, vector<int>> &map, vector<bool> &RoomsVisited, vector<bool> &selfLoops,vector<int> &paths) {
    int count = 0;
    vector<int> path;
    dfs(source, map, destination, count, RoomsVisited, path, selfLoops,paths);
    return count;
}

int main() {
    int noOfTestCase;
    cin >> noOfTestCase;

    while (noOfTestCase--) {
        int N, M;
        cin >> N >> M;

        vector<bool> RoomsVisited(N, false);
        unordered_map<int, vector<int>> map;
        vector<bool> selfLoops(N + 1, false); // To store self-loops info for each node
        vector<int> paths(N+1,0);
        while (M--) {
            int X, Y;
            cin >> X >> Y;

            if (X == Y) {
                selfLoops[X] = true; // Mark self-loops
                paths[X] = -1;
            }

            if (map.find(X) == map.end()) {
                map[X] = vector<int>();
            }
            map[X].push_back(Y);
        }
        for(int i = 0;i<selfLoops.size();i++){
          if(selfLoops[i]){
            for(int j :  map[i]){
              if (j != i ) paths[j] = -1;
            }
          }
        }

        for (int i = 1; i <= N; ++i) {
            int pathCount = findPathsFromUtoV(1, i, map, RoomsVisited, selfLoops,paths);
            printPathCount(1, i, pathCount);
        }
        cout << endl;
    }
    return 0;
}
