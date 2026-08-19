#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, r;
    cout<<"Number of processes & distinct resources: ";
    cin>>n>>r;
    vector<vector<int>> alloc, max;
    int alloc_in, max_in;
    for (int i=0; i<n; i++){
        for (int j=0; j<r; j++){
            cout>>"Allocated number of instances of resource "<<j+1<<" of process "<<i<<": ";
            cin<<alloc_in;
            alloc[i].push_back(alloc_in);
            cout<<"\n";
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<r; j++){
            cout>>"Max number of instances of resource "<<j+1<<" of process "<<i<<": ";
            cin<<max_in;
            alloc[i].push_back(max_in);
        }
    }
    vector<int> total, available;
    int t;
    cout>>"Enter total number of instances of each resource one-by-one: \n";
    for (int i=0; i<r; i++){
        cin>>t;
        total.push_back(t);
    }
    int tA =0 ;
    for (int i=0; i<r; i++){
        for (int j=0; j<n; j++){
            tA += alloc[j][i];
        }
        available.push_back(total[i] - tA);
        tA = 0;
    }

    vector<int> f(n, 0);
    vector<int> ans(n);
    int ind = 0;
    vector<vector<int>> need(n, vector<int>(r));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    int y = 0;
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            if (f[i] == 0) {
                int flag = 0;
                for (int j = 0; j < r; j++) {
                    if (need[i][j] > avail[j]) {
                        flag = 1;
                        break;
                    }
                }
    
                if (flag == 0) {
                    ans[ind++] = i;
                    for (y = 0; y < r; y++) {
                        avail[y] += alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }


}
















int main() {
    // P0, P1, P2, P3, P4 are the names of Process

    int n = 5; // Indicates the Number of processes
    int r = 3; // Indicates the Number of resources
    vector<vector<int>> alloc = {{0, 0, 1}, {3, 0, 0}, {1, 0, 1}, // P2
                                 {2, 3, 2}, // P3
                                 {0, 0, 3}}; // P4

    vector<vector<int>> max = {{7, 6, 3}, // P0 // MAX Matrix
                                {3, 2, 2}, // P1
                                {8, 0, 2}, // P2
                                {2, 1, 2}, // P3
                                {5, 2, 3}}; // P4

    vector<int> avail = {2, 3, 2}; // These are Available Resources

    vector<int> f(n, 0);
    vector<int> ans(n);
    int ind = 0;
    vector<vector<int>> need(n, vector<int>(r));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    int y = 0;
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            if (f[i] == 0) {
                int flag = 0;
                for (int j = 0; j < r; j++) {
                    if (need[i][j] > avail[j]) {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0) {
                    ans[ind++] = i;
                    for (y = 0; y < r; y++) {
                        avail[y] += alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }

    cout << "The SAFE Sequence is as follows\n";
    for (int i = 0; i < n - 1; i++) {
        cout << " P" << ans[i] << " ->";
    }
    cout << " P" << ans[n - 1] << endl;

    return 0;
}