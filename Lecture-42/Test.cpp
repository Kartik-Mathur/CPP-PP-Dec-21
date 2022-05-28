#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <set>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<pair<T, int> > > adjList;

	void addEdge(T u, T v, int dist, bool bidir = true) {
		adjList[u].push_back({v, dist});
		if (bidir) {
			adjList[v].push_back({u, dist});
		}
	}

	void print() {
		for (auto p : adjList) {
			cout << p.first << "-->";
			for (auto neighbour : p.second) {
				cout << "(" << neighbour.first << ", " << neighbour.second << ") ";
			}
			cout << endl;
		}
	}

	void SSSP(T src) {
		unordered_map<T, int> dist;
		// initialize the distance of every key
		for (auto p : adjList) {
			dist[p.first] = INT_MAX;
		}

		unordered_map<T, T> MaaBaap;
		set<pair<int, T> > s;
		dist[src] = 0;
		MaaBaap[src] = src;
		s.insert({0, src});

		while (!s.empty()) {
			auto address = s.begin();
			s.erase(address);
			auto parent = address->second;
			auto p_d = address->first;
			for (auto n : adjList[parent]) {
				auto children = n.first;
				auto edge_dist = n.second;

				if (dist[children] > p_d + edge_dist) {
					auto f = s.find({dist[children], children});

					if (f != s.end()) {
						s.erase(f);
					}

					dist[children] = p_d + edge_dist;
					MaaBaap[children] = parent;
					s.insert({dist[children], children});
				}
			}
		}

		for (auto p : dist) {
			cout << "Distance of " << p.first << " from "
			     << src << " : " << p.second << endl;
		}
	}
};

int main() {

	Graph<string> g;

	g.addEdge("Delhi", "Jaipur", 1);
	g.addEdge("Delhi", "Pune", 10);
	g.addEdge("Jaipur", "Pune", 3);
	g.addEdge("Goa", "Pune", 4);
	g.addEdge("Goa", "Hyderabad", 10);
	g.addEdge("Jaipur", "Hyderabad", 4);

	// g.print();
	g.SSSP("Delhi");

	return 0;
}
















