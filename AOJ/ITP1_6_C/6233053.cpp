#include <iostream>

using namespace std;

int main(){
  int building[4][3][10] = {0};//[棟][階][部屋]
  int n;
  cin >> n;
  for (int i=0;i<n;i++) {
    int b,f,r,v;
    cin >> b >> f >> r >> v;
    building[b-1][f-1][r-1] += v;
  }
  for (int i=0;i<4;i++) {
    for (int j=0;j<3;j++) {
      for (int k=0;k<10;k++) {
        cout << ' ' << building[i][j][k];
      }
      cout << endl;
    }
    if(i!=3) {
      for(int l=0;l<20;l++)cout << "#";
      cout << endl;
    }
    
  }
}
