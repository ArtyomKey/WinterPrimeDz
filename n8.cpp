
#include <iostream>
using namespace std;

void f(bool* A, int b, int y){
  if(b == 0){
    return;
  }
  A[y*5]+= A[y];
  A[y*6]+= A[y];
  if(y % 15 == 0){
    A[y/15] += A[y];
    f(A, b-1, y/15);
  }
  f(A, b-1, y*5);
  f(A, b-1, y*6);
}
int main() {
  int x, y, n, ans = 0;
  cin >> x >> n;
  int d = x*6*n;
  bool A[d];
  f(A, n, x);
  for(int i = 0; i < d; i++){
    if(A[i]){
      ans += 1;
    }
  }
  cout << ans;
}
