#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (b < c && a < b) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
