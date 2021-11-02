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
#include <unistd.h>

using namespace std;



void process() {

	int n; cin >> n;
	vector<long long> items(n);
	for(int i = 0; i < n; i++) cin >> items[i];

	sort(items.begin(), items.end());
	
	long long minus = 0;
	int i = 0;

	long long max = items[i];
	for(i = 0; i < n; i++) {
		long long value = items[i];

		long long actual_value = value + minus;

		if (actual_value >= max) max = actual_value;

		minus += actual_value * -1;
	}

	cout << max << endl;
}


int main() {
	long long n; cin >> n;
	while(n--) {
		process();
	}
}