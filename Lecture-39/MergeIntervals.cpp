// MergeIntervals.cpp
// https://leetcode.com/problems/merge-intervals/
bool compare(vector<int> a, vector<int> b) {
	if (a[0] == b[0]) { // if the starting time value is same
		return a[1] < b[1];// sort according to the end time, ascending order
	}
	return a[0] < b[0];
}

vector<vector<int>> merge(vector<vector<int>>& intervals) {
	sort(intervals.begin(), intervals.end(), compare);
	int si, ei, sj, ej;
	si = intervals[0][0];
	ei = intervals[0][1];
	vector<vector<int> > ans;
	for (int i = 1; i < intervals.size(); ++i)
	{
		sj = intervals[i][0];
		ej = intervals[i][1];

		if (si <= sj and sj <= ei) {
			// Overlapping hogi
			si = si;
			ei = max(ei, ej); // Intervals merge kardo
		}
		else {
			vector<int> x;
			x.push_back(si);
			x.push_back(ei); //[si, ei];
			ans.push_back(x); // [ [si,ei] ]
			si = intervals[i][0];
			ei = intervals[i][1];
		}
	}

	vector<int> x;
	x.push_back(si);
	x.push_back(ei); //[si, ei];
	ans.push_back(x); // [ [si,ei] ]
	return ans;
}




















