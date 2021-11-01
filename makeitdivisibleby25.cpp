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

void process() {
	string ins; cin >> ins;
	string s = ins;
	cerr << "ins:" << ins << " ";
	vector<int> positions;

	for(int i = 0; i <s.length(); i++) {
		char c = s[i];
		if (c == '0' or c == '5') positions.push_back(i);
	}

	int best = ins.length();
	for(const int pos: positions) {
		int index = -2;
		for(int i = pos-1; i > -1; i--) {
			if (
				(s[pos] == '5' and (s[i] == '2' or s[i] == '7')) or
				(s[pos] == '0' and (s[i] == '5' or s[i] == '0'))
			) {
				index = i; break;
			}
		}
		int steps = ( int(s.length()) - (pos+1) + pos - (index+1)); 
		best = min(steps, best);
	}

	cout << best << endl;

}


int main() {
	int n; cin >> n;
	while(n--) process();
}