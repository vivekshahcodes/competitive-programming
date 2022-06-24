//Recursion
//TC - O(3^n)
//SC - O(n) for the stack space

#include<bits/stdc++.h>
using namespace std;

int maxPoints(int a, int n, vector<vector<int>>& v){
	
	if(n < 0){
		return 0;
	}
	
	int best = 0;
	
	for(int i = 0; i < 3; i ++){
		if(i != a){
			best = max(best, maxPoints(i, n - 1, v) + v[n][i]);
		}
	}
	
	return best;
}

int main(){
	
	int n;
	cin>>n;
	
	vector<vector<int>> v(n, vector<int> (3));
	
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < 3; j ++){
			cin>>v[i][j];
		}
	}
	
	cout<<maxPoints(3, n - 1, v);
	
	return 0;
}


//Memoization
//TC - O(n)
//SC - O(n) for the stack space + O(n) for the dp array

#include<bits/stdc++.h>
using namespace std;

int maxPoints(int a, int n, vector<vector<int>>& v, vector<vector<int>>& dp){
	
	if(n<0){
		return 0;
	}
	
	if(dp[n][a] != -1){
		return dp[n][a];
	}
	
	int best = 0;
	
	for(int i = 0; i < 3; i ++){
		if(i != a){
			best = max(best, maxPoints(i, n - 1, v, dp) + v[n][i]);
		}
	}
	
	return dp[n][a] = best;
}

int main(){
	
	int n;
	cin>>n;
	
	vector<vector<int>> v(n, vector<int> (3));
	
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < 3; j ++){
			cin>>v[i][j];
		}
	}
	
	vector<vector<int>> dp(n, vector<int> (4, -1));
	
	cout<<maxPoints(3, n - 1, v, dp);
	
	return 0;
}


//Tabulation
//TC - O(n)
//SC - O(n) for the dp array

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	vector<vector<int>> v(n, vector<int> (3));
	
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < 3; j ++){
			cin>>v[i][j];
		}
	}
	
	vector<vector<int>> dp(n, vector<int> (4, 0));
	for(int i = 0; i <= 3; i ++){
		for(int j = 0; j < 3; j ++){
			if(i != j){
				dp[0][i] = max(dp[0][i], v[0][j]);
			}
		}
	}
	
	for(int day = 1; day < n; day ++){
		for(int last = 0; last <= 3; last ++){
			for(int task = 0; task < 3; task ++){
				if(task != last){
					int curr = v[day][task] + dp[day - 1][task];
					dp[day][last] = max(dp[day][last], curr);
				}
			}
		}
	}
	
	cout<<dp[n-1][3];
	
	return 0;
}


//Space Optimization
//TC - O(n)
//SC - O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	vector<vector<int>> v(n, vector<int> (3));
	
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < 3; j ++){
			cin>>v[i][j];
		}
	}
	
	vector<int> prev(4, 0);
	for(int i = 0; i <= 3; i ++){
		for(int j = 0; j < 3; j ++){
			if(i != j){
				prev[i] = max(prev[i], v[0][j]);
			}
		}
	}
	
	for(int day = 1; day < n; day ++){
		vector<int> temp(4, 0);
		for(int last = 0; last <= 3; last ++){
			for(int task = 0; task < 3; task ++){
				if(task != last){
					int curr = v[day][task] + prev[task];
					temp[last] = max(temp[last], curr);
				}
			}
		}
		prev = temp;
	}
	
	cout<<prev[3];
	
	return 0;
}
