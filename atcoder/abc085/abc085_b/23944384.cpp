#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int N,X = 1;
    cin >> N;
    vector<int>d(N);
    for (int i=0;i<N;i++){
        cin >> d[i];
    }
    sort(d.begin(),d.end());
    reverse(d.begin(),d.end());
    for (int i=0;i<N-1;i++){
        if (d[i] > d[i+1])X++;
    }
    cout << X << endl;

}

