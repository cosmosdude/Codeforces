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
	string s; cin >> s;
	vector<char> values;

	for(int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (c != '+') values.push_back(c);
	}

	// Insertion sort
	for(int i = 1; i < values.size(); i++) {
		char item = values[i];
		int j = i;
		while(j and values[j-1] > item) {
			values[j] = values[j-1];
			j--;
		}
		values[j] = item;
	}

	for(int i = 0; i < values.size(); i++)
		cout << values[i] << (i==values.size()-1 ? '\n': '+');
}