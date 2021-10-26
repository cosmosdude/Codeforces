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

using namespace std;

int main() {
	int w; cin >> w;

	bool candivide = false;
	for(int a = 1; a<w; a++) {
		int b = w-a;
		if (a%2==0 and b%2==0) {
			candivide = true;
			break;
		}
	}

	cout << (candivide?"YES":"NO") << endl;
	return 0;
}