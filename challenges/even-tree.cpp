#include <iostream>
#include <map>
#include <queue>
#include <set>

using namespace std;

int main(void) {
    int N, M;
    int even_trees = 0;
    map<int, set<int>> graph;

    cin >> N >> M;

    for(int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].insert(b);
        graph[b].insert(a);
    }

    for(auto const &vertex : graph) {
        for(auto const &subv : vertex.second) {
            queue<int> q;
            set<int> parent;
            int subvertices = 0;

            q.push(subv);
            parent.insert(vertex.first);
            parent.insert(subv);

            while(!q.empty()){
                subvertices++;
                int tmp = q.front();
                parent.insert(tmp);
                q.pop();
                for(auto const &subv : graph[tmp]) {
                    if(!parent.count(subv))
                        q.push(subv);
                }
            }

            if(subvertices % 2 == 0)
                even_trees++;
        }
    }

    even_trees /= 2;

    cout << even_trees << endl;

    return 0;
}
