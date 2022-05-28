// GenericGraph.cpp
#include <iostream>
#include <list>
#include <queue>
#include <unordered_map>
using namespace std;

template<typename T>
class Graph {
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

	void bfs(T src) {
		queue<T> q;
		unordered_map<T, bool> visited;
		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			T f = q.front();
			q.pop();
			cout << f << " ";
			for (auto neighbour : adjList[f]) {
				if (visited.count(neighbour) == 0) {
					q.push(neighbour);
					visited[neighbour] = true;
				}
			}
		}
		cout << '\n';
	}
	// SSSP: Single Source Shortest Path Algorithm
	int SSSP(T src, T des) {
		queue<T> q;
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, int> distance;
		q.push(src);
		visited[src] = true;
		distance[src] = 0;
		while (!q.empty()) {
			T f = q.front();
			q.pop();
			for (auto neighbour : adjList[f]) {
				if (visited.count(neighbour) == 0) {
					q.push(neighbour);
					visited[neighbour] = true;
					parent[neighbour] = f;
					distance[neighbour] = distance[f] + 1;
				}
			}
		}

		// for (auto p : distance) {
		// 	cout << "Distance of " << p.first << " from "
		// 	     << src << " " << p.second << endl;
		// }

		T child = des;
		while (child != parent[child]) {
			cout << child << "<--";
			child = parent[child];
		}
		cout << child << '\n';
		return distance[des];
	}

	void dfs()
};

int main() {

	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice;
			v += board[v];
			g.addEdge(u, v, false);
		}
	}
	int distance = g.SSSP(0, 36);
	cout << "Number of dice rolls: " << distance << endl;
	// g.addEdge(0, 1);
	// g.addEdge(0, 3);
	// g.addEdge(2, 3);
	// g.addEdge(4, 3);
	// g.addEdge(4, 5);
	// g.addEdge(2, 1);
	// g.addEdge(2, 4);
	// g.bfs(0);
	// g.SSSP(0, 5);
	// g.addEdge("Garvit", "Himanshu", false);
	// g.addEdge("Himanshu", "Avishka", false);
	// g.addEdge("Avishka", "Dhruv", false);
	// g.addEdge("Dhruv", "Himanshu", false);
	// g.addEdge("Garvit", "Dhruv", false);
	// g.addEdge("Garvit", "Kunal", false);
	// g.addEdge("Dhruv", "Kunal");

	// g.print();


	return 0;
}
















