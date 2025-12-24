#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>
#include <string>
#include <sstream> 

using namespace std;

map<int, int> scoreboard;

	// sorting higer and lager valus
bool mySortRule(int a, int b) {
    if (scoreboard[a] != scoreboard[b]) {
        return scoreboard[a] > scoreboard[b];
    }
    return a > b;
}

int main() {
    int n1, n2;
    // sixe of expected
	cout << "Enter number of nodes for the Expected Tree: "; 
    if (!(cin >> n1)) return 0;

    vector<int> expected(n1);
    cout << "Enter the " << n1 << " node values (separated by space): ";
    for (int i = 0; i < n1; i++) {
        cin >> expected[i];
    }

    // size of actual
  cout << "\n Enter number of nodes for the Actual Tree: ";
    if (!(cin >> n2)) return 0;
    vector<int> actual(n2);
    cout << "Enter the " << n2 << " node values (separated by space): ";
    for (int i = 0; i < n2; i++) {
        cin >> actual[i];
    }

    vector<int> mistakes;

    // Compare 
    for (int i = 0; i < n1; i++) {
        int d = abs(expected[i] - actual[i]);
        if (d > 0) {
            mistakes.push_back(d);
            scoreboard[d]++;
        }
    }

    // for identical tree
    cout << "\n Final Result " << endl;
    if (mistakes.empty()) {
        cout << "0" << endl;
        return 0;
    }

    // mistae list and sort it
    sort(mistakes.begin(), mistakes.end(), mySortRule);

    // final result 
    for (size_t i = 0; i < mistakes.size(); i++) {
        cout << mistakes[i];
    }
    cout << endl;

    return 0;
}
