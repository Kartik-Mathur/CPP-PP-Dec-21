// Dfs.cpp
// GenericGraph.cpp
#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
using namespace std;

template<typename T>
class Graph {
	void dfsHelper(T src, unordered_map<T, bool> &visited) {
		cout << src << " ";
		visited[src] = true;
		for (auto neighbours : adjList[src]) {
			if (!visited[neighbours]) {
				dfsHelper(neighbours, visited);
			}
		}
	}
public:
	unordered_map<T, list<T> > adjList;
	void addEdge(T u, T v, bool bidir = true) {
		adjList[u].push_back(v);
		if (bidir) {
			adjList[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adjList) {
			cout << p.first << "-->";
			for (auto neighbours : p.second) {
				cout << neighbours << " ";
			} cout << '\n';
		}
	}

	void dfs(T src) {
		unordered_map<T, bool> visited;
		dfsHelper(src, visited);
		int component = 1;
		for (auto p : adjList) {
			if (!visited[p.first]) {
				dfsHelper(p.first, visited);
				component ++;
			}
		}
		cout << "\nNumber of components: " << component << endl;
	}
};

int main() {

	Graph<int> g;

	g.addEdge(0, 1);
	g.addEdge(0, 3);
	g.addEdge(2, 3);
	g.addEdge(4, 3);
	g.addEdge(4, 5);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(6, 7);
	g.addEdge(8, 7);
	g.addEdge(80, 70);
	g.addEdge(80, 71);
	g.dfs(0);



	return 0;
}
















