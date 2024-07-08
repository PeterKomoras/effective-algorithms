#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main() {
    int n,m,c;
    vector<int> beads, beauty;

    // Read input
    cin >> n >> m;

    beads.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> beads[i];
    }


    beauty.resize(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> beauty[i];
    }

    cin >> c;



    vector<long> dp(n);
    vector<int> last_equal(m+1, -1);
    

    // first iteration
    dp[0] = c;
    last_equal[beads[0]] = 0;
    for (int i = 1; i < n; i++) {
        if (last_equal[beads[i]] == -1) // The first occurence of a color of the bead at i
            dp[i] = dp[i-1] + c;
        else if (beads[i] == beads[i-1])
            dp[i] = dp[i-1] + beauty[beads[i]];
        else 
            dp[i] = max(
                dp[last_equal[beads[i]]] + beauty[beads[i]],
                dp[i-1] + c);

        last_equal[beads[i]] = i;
    }

    cout << dp[n-1] << "\n";
    


    return 0;
}
