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
	int n; cin >> n;
	int l; cin >> l;
	vector<int> mices; mices.resize(l);

	for(int i = 0; i < mices.size(); i++) cin >> mices[i];

	sort(mices.rbegin(), mices.rend());

	int cat_pos = 0;

	int count = 0;
	for(int i = 0; i < mices.size(); i++) {
		if (mices[i] > cat_pos) {
			count ++;
			cat_pos += n - mices[i];
		}
	}

	cout << count << endl;

}


int main() {
	int n; cin >> n;
	while(n--) process();
}