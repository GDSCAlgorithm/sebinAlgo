#include <iostream>
using namespace std;
 
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	int N;
	int arr[26];
	bool poss;
	string s1, s2;
	cin >> N;
 
	for (int i = 0; i < N; i++) {
		cin >> s1 >> s2;
		poss = true;
		fill(arr, arr + 26, 0);
		for (int j = 0; j < s1.length(); j++) {
			arr[s1[j] - 'a']++;
			arr[s2[j] - 'a']--;
		}
		for (int j = 0; j < 26; j++) {
			if (arr[j] != 0) {
				poss = false;
				break;
			}
		}
		if (poss) cout << "Possible\n";
		else cout << "Impossible\n";
	}
 
	return 0;
}