#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// store the pair values in a map (increase the value if the key already exists)
		map<string, long long> mp;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < n; j++) {
				string s;
				long long c;
				cin >> s >> c;
				mp[s] = (i == 0 ? c : mp[s] + c);
			}
		}
		// store the elements of the map into a pairs of string and long long vector
		vector<pair<string, long long>> vec;
		for (auto& e : mp) {
			vec.push_back(make_pair(e.first, e.second));
		}
		// sort the vector based on the number of correct solutions for every code
		sort(vec.begin(), vec.end(), [](const pair<string, long long>& a, const pair<string, long long>& b) {
			return a.second < b.second;
		});
		// output
		for (int i = 0; i < (int) vec.size(); i++) {
			cout << vec[i].second << " ";
		}
		cout << '\n';
	}
	return 0;
}
