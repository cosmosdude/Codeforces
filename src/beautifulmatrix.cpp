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
	int x, y;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			char c; cin >> c;
			if (c=='1') {
				y = i;
				x = j;
			}
		}
	}
	cout << abs(y-2) + abs(x-2) << endl;
}