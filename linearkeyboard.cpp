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

	int indices[26];
	for(int i = 0; i < 26; i++) {
		char c; cin >> c;
		indices[int(c - 'a')] = i;
	}

	string str; cin >> str;

	int steps = 0;
	int prev_i = indices[str[0]-'a'];

	for(int i = 1; i < str.length(); i++) {
		char c = str[i];
		int index = indices[c-'a'];

		steps += abs(prev_i - index);

		prev_i = index;
	}

	cout << steps << endl;
}


int main() {
	int n; cin >> n;
	while(n--) {
		process();
	}
}