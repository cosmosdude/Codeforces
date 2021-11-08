#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>
#include <numeric>
#include <iostream>
#include <list>
#include <forward_list>
#include <stack>
#include <climits>

using namespace std;



int main() {
	int n; cin >> n;
	while(n--) {
		long nums[3];
		long max_num = 0;
		for(int i = 0; i < 3; i++) {
			cin >> nums[i];
			max_num = max(nums[i], max_num);
		}

		int max_count = 0;
		for(int i = 0; i < 3; i++) 
			if (nums[i] == max_num) max_count++;

		for(int i = 0; i < 3; i++) {
			if (nums[i] == max_num) {
				if (max_count > 1) cout << 1;
				else cout << 0;
			} else
				cout << max_num-nums[i]+1; 
			cout << (i!=2 ? ' ': '\n');
		}


	}
}