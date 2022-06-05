// AsteroidCollision.cpp
class Solution {
public:
	vector<int> asteroidCollision(vector<int>& asteroids) {
		stack<int> s;
		int n = asteroids.size();
		for (int i = 0 ; i < n ; i++) {
			int a = asteroids[i];
			if (!s.empty() and a < 0 and asteroids[s.top()] > 0) {
				bool negativeWalaBachaHai = true;
				while (!s.empty() and a < 0 and asteroids[s.top()] > 0) {
					if (abs(asteroids[s.top()]) == abs(a)) {
						s.pop();
						negativeWalaBachaHai = false;
						break;
					}
					else if (abs(asteroids[s.top()]) > abs(a)) {
						// negative wala destroy ho jaega
						negativeWalaBachaHai = false;
						break;
					}
					else {
						// Stack ke top wala destroy ho jaega
						s.pop();
						// Toh mujhe negative walo ko stack mei daalna h
						negativeWalaBachaHai = true;
					}
				}
				if (negativeWalaBachaHai == true) {
					s.push(i);
				}
			}
			else {
				s.push(i);
			}
		}
		vector<int> ans;
		while (!s.empty()) {
			ans.push_back(asteroids[s.top()]);
			s.pop();
		}
		reverse(ans.begin(), ans.end());
		return ans;
		// writing code
	}
};