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
	long long x, n;
	cin >> x;
	cin >> n;

	long long mod = n%4;
	bool is_even = (x%2 == 0);
	if (mod) {
		for(long long i = n-mod+1; i <= n; i++) {
			if (i % 4 == 1) x = is_even ? x-i : x+i;
			else x = is_even ? x+i : x-i;
		}
	}
	cout << x << endl;
}


int main() {
	long long n; cin >> n;
	while(n--) process();
}