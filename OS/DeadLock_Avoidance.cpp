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