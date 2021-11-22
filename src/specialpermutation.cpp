#include "bits/stdc++.h"
using namespace std;


// long long
typedef long long Long;
typedef long double BFloat;
// vector strings
typedef vector<string> Vstring;
// vector primitives
typedef vector<char> Vchar; typedef vector<Vchar> VVchar;
typedef vector<int> Vint; typedef vector<Vint> VVint;
typedef vector<Long> Vlong; typedef vector<Vint> VVlong;

// declare var and immediately cin
#define cinvar(type, name)\
	type name; cin >> name;

#define cinchar(name) cinvar(char, name)
#define cinuint(name) cinvar(unsigned int, name)
#define cinint(name) cinvar(int, name)
#define cinlong(var) cinvar(long long, var)
#define cinulong(var) cinvar(unsigned long long, var)
#define cindouble(var) cinvar(double, var)
#define cinstring(var) cinvar(string, var)
// declare var and immediately getline
#define cinline(var)\
	string var; getline(cin, var);

#define cinvector(type, name, n) \
	vector<type> name(n);\
	for(auto& e: name) cin >> e;


#define twhile(a)\
	int a; cin >> a; while(a--)
#define tfor(i, a)\
	int a; cin >> a; for(int i = 0; i < a; i++)

#define f(i, a, n) for(int i = a; i < n; i++)
#define fe(i, a, n) for(int i = a; i <= n; i++)
#define fr(i, a, n) for(int i = n-1; i> a; i--)
#define fer(i, a, n) for(int i = n-1; i >= a; i--)

#define fstr(i, s) f(i, 0, s.length())
#define ferstr(i, s) fr(i, s.length()-1, 0)

#define pvc(target, v, c)\
	for(int i = 0; i < v.size(); i++)\
		target << v[i] << (i==v.size()-1 ? '\n': c);

#define pv(v)\
	pvc(cout, v, ' ')

//----------------------



int main() {

	twhile(t) {
		cinint(n); cinint(a); cinint(b);


		int ml = n/2;

		int lc = 0;
		int rc = 0;
		if (a<=ml) lc++;
		else rc ++;
		if (b<=ml) lc++;
		else rc++;

		if ( (a <= ml and b <= ml) or (a > ml) and (b > ml)) {
			cout << -1 << endl;
		} else if (a > ml+1) {
			cout << -1 << endl;
		} else if (b < ml) {
			cout << -1 << endl;
		} else {

			// vector<int> values(100);
			// for(int i = 0; i < 100; i++) {
			// 	values[i] = values[i+1];
			// }


			// cerr << "implement" << endl;

			cout << a << " ";
			for(int val = n, count = ml-1; count; val--) {
				if (val != b) {
					cout << val << " ";
					count --;
				} else {
					continue;
				}
			}

			for(int val = 1, count = ml-1; count; val++) {
				if (val != a) {
					cout << val << " ";
					count --;
				} else {
					continue;
				}
			}
			cout << b << endl;

			
		}
	}

	return 0;
}
 