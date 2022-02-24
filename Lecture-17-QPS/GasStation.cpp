// GasStation.cpp
class Solution {
public:
	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
		int total_gas = 0, total_cost = 0;


		int n = gas.size();
		int net = 0;
		int start = 0;
		for (int i = 0 ; i < n ; i++) {
			total_cost += cost[i];
			total_gas += gas[i];
			net += gas[i];
			net -= cost[i];
			if (net < 0) {
				net = 0;
				start = i + 1;
			}
		}
		if (total_gas - total_cost < 0) {
			return -1;
		}
		return start;
	}
};


/*
class Solution {
public:

    int meraFun(vector<int>& gas, vector<int>& cost){
     int total_gas = 0,total_cost = 0;
        for(int i = 0 ; i < gas.size() ; i++){
            total_gas += gas[i];
            total_cost += cost[i];
        }
        if(total_gas - total_cost < 0){
            return -1;
        }
        int n = gas.size();
        int net = 0;
        int start = 0;
        for(int i = 0 ; i < n ; i++){
            net += gas[i];
            net -= cost[i];
            if(net < 0){
                net = 0;
                start = i+1;
            }
        }
        return start;
    }

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int ans = meraFun(gas,cost);
        return ans;
    }
};*/