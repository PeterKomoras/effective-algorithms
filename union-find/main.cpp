#include <iostream>

#include <map>
#include <vector>
#include <set>
using namespace std;

int main() {
    string town1, town2;
    map < string, int > name_idset;
    vector< set < string >> sets;
    int n;
    cin >> n;

    for (int i = 0; i<n; i++) {
        cin >> town1 >> town2;
        if (name_idset.find(town1) == name_idset.end()) {
            name_idset.insert({town1, sets.size()});
            sets.push_back({town1});
        }
        if (name_idset.find(town2) == name_idset.end()) {
            name_idset.insert({town2, sets.size()});
            sets.push_back({town2});
        }

        int id1 = name_idset[town1];
        int id2 = name_idset[town2];
        int s1 = sets[id1].size();
        int s2 = sets[id2].size();

        if (id1 == id2) cout << 0 << endl;
        else {
            if (s1 < s2) {
                int tmp = id1;
                id1 = id2;
                id2 = tmp;
            }
            cout << s1 * s2 << endl;
            for (string t : sets[id2]) {
                sets[id1].insert(t);
                name_idset[t] = id1;
            }
        }
    }

    return 0;
}
