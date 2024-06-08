#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;


void dfs(int node, unordered_map<int, vector<int>> &map, int destination, int &count, vector<bool> &RoomsVisited, vector<int> &path,vector<bool> selfLoops) {
    if (node == destination) {
        // Check for self-loop
        auto it = find(selfLoops.begin(),selfLoops.end(),node);

        if (it != selfLoops.end()) {
            count = -1; // Marking as infinite paths if a self-loop is found
            return;
        }
        count++;
        return;
    }
    RoomsVisited[node - 1] = true; // Mark the current room as visited
    path.push_back(node); // Push current node into the path

    vector<int> adjNeighbours = map[node];

    for (int neighbour : adjNeighbours) {
        auto it = find(selfLoops.begin(),selfLoops.end(),neighbour);
        if(it != selfLoops.end()){
          count = -1;
          continue;
        }
        if (!RoomsVisited[neighbour - 1] ) {
            dfs(neighbour, map, destination, count, RoomsVisited, path, selfLoops);
        }
    }

    RoomsVisited[node - 1] = false; // Mark the current room as unvisited after exploring its neighbours
    path.pop_back(); // Pop the current node from the path
}

void printPathCount(int source, int destination, int count) {
    if (count == -1) {
        cout << -1 << " ";
    } else {
        cout << count << " ";
    }
}

int findPathsFromUtoV(int source, int destination, unordered_map<int, vector<int>> &map, vector<bool> &RoomsVisited,vector<bool> selfLoops) {
    int count = 0;
    vector<int> path;
    dfs(source, map, destination, count, RoomsVisited, path,selfLoops);
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
        vector<bool> selfLoops;
        while (M--) {
            int X, Y;
            cin >> X >> Y;

            if (map.find(X) == map.end()) {
                map[X] = vector<int>();
            }
            map[X].push_back(Y);

            if(X == Y){
              selfLoops.push_back(X);
            }
        }

        int i = 1;
        for (int j = 1; j <= N; j++) {
            int pathCount = findPathsFromUtoV(i, j, map, RoomsVisited,selfLoops);
            printPathCount(i, j, pathCount);
        }
        cout << endl;
    }
    return 0;
}
