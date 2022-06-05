// DecodeString.cpp
class Solution {
public:
	string decodeAtIndex(string a, int k) {
		stack<pair<long long int, string> > s;
		for (int i = 0 ; i < a.length() ; i++) {
			string x = "";
			while (i < a.length() and (a[i] < '2' || a[i] > '9')) {
				x += a[i++];
			}
			long long int len = ( (s.empty() ? 0 : s.top().first) + x.length() ) * (a[i] - '0');
			s.push({len, x});
			if (len >= k) {
				break;
			}
		}

		while (!s.empty()) {
			auto p = s.top();
			string x = p.second;
			s.pop();
			k = k % (((s.empty()) ? 0 : s.top().first) + x.length());
			if (k == 0)
				k = (((s.empty()) ? 0 : s.top().first) + x.length());
			if (s.empty()) {
				string y = "";
				y += x[k - 1];
				return y;
			}
			if (k > s.top().first) {
				string y = "";
				y += x[k - s.top().first - 1];
				return y;
			}
		}
		return "";
	}
};












