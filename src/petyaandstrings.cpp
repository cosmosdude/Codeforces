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
	string a, b;
	getline(cin, a);
	getline(cin, b);

	int cmp = 0;
	for(int i = 0; i < a.length(); i++) {
		char aa = tolower(a[i]);
		char bb = tolower(b[i]);
		if (aa > bb) { cmp = 1; break; }
		if (aa < bb) { cmp = -1; break; }
	}

	cout << cmp << endl;
}