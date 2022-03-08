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
	int a; cin >> a; cin.ignore(); while(a--)
#define tfor(i, a)\
	int a; cin >> a; cin.ignore(); for(int i = 0; i < a; i++)

// quick for
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
Long fofx(Long x, Long a) {
	return x/a + x%a;
}


int main() {

	cinint(n);

	while(n--) {
		cinlong(l);
		cinlong(r);
		cinlong(a);

		Long value = 0;

		// int i = r;
		// while(i >= l and ( (i/a) + (i%a)) >= value) {
		// 	value = (i/a) + (i%a);
		// 	i--;
		// }

		Long div_min = l/a;
		Long div_max = r/a;

		Long i = div_max + 1;

		while(i >= div_min) {
			Long x = max(l, min(r, i*a));
			Long x_up = max(l, min(r, x+1));
			Long x_down = max(l, min(r, x-1));

			value = max(fofx(x, a), value);
			value = max(fofx(x_up, a), value);
			value = max(fofx(x_down, a), value);

			i--;

			if ( abs(div_max - i) >= 1000 ) break;
		}





		cout << value << endl;
	}
	

	return 0;
}

