#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, l;
    cin >> n >> m >> l;
    vector<vector<long long> >A(n, vector<long long>(m)), B(m, vector<long long >(l)), C(n, vector<long long>(l, 0));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> A[i][j];
    for(int i=0;i<m;i++) for(int j=0;j<l;j++) cin >> B[i][j];
    
    for(int i=0;i<n;i++) for(int j=0;j<l;j++) for(int k=0;k<m;k++) {
            C[i][j] += A[i][k] * B[k][j];
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<l;j++) {
            cout << C[i][j];
            if(j != l-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
