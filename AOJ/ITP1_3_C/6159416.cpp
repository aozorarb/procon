#include <iostream>
using namespace std;

int main() {
    while (true) {
        int x,y;
        cin >> x >> y;
        if(x == 0 && y == 0)break;
        if (x > y)cout << y << ' ' << x << endl;
        else cout << x << ' ' << y << endl;
    }
}
