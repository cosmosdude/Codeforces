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

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> values(n);
	for(int i = 0; i < n; i++) cin >> values[i];

	int count = 0;
	int score = values[k-1];
	for(const int v: values) {
		if (v and v >= score) count ++;
	}
	cout << count << endl;
}