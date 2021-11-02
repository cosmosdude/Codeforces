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
	int n; cin >> n;

	int x = 0;
	while(n--) {
		string op; cin >> op;
		if (op[1] == '-') x--;
		else x++;
	}

	cout << x << endl;
}