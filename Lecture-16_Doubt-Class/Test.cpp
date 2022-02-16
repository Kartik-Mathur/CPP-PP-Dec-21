#include <iostream>
using namespace std;

void solve() {
	int c1, c2, c3, c4;
	int n, m;
	int r[100000];
	int t[100000];

	cin >> c1 >> c2 >> c3 >> c4;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> r[i];
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> t[i];
	}

	// Rickshaws par jaane ki minimum cost
	int rick_cost = 0;
	for (int i = 0; i < n; ++i)
	{
		rick_cost += min(r[i] * c1, c2);
	}

	rick_cost = min(rick_cost, c3);

	// Taxis par jaane ki minimum cost
	int taxi_cost = 0;
	for (int i = 0; i < m; ++i)
	{
		taxi_cost += min(t[i] * c1, c2);
	}

	taxi_cost = min(taxi_cost, c3);


	int total_cost = rick_cost + taxi_cost;
	total_cost = min(total_cost, c4);

	cout << total_cost << endl;


}

int main() {

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		solve();
	}

	return 0;
}
















