/* */
#include <iostream>
using namespace std;

void f(bool* A, int b, int y){
  if(b == 0){
    return;
  }
  A[y*8]+= A[y];
  A[y*4]+= A[y];
  if(y % 2 == 0){
    A[y/2] += A[y];
    f(A, b-1, y/2);
  }
  f(A, b-1, y*8);
  f(A, b-1, y*4);
}
int main() {
  int x, y, n, ans = 0;
  cin >> x >> n;
  int d = x*8*n;
  bool A[d];
  f(A, n, x);
  for(int i = 0; i < d; i++){
    if(A[i]){
      ans += 1;
    }
  }
  cout << ans;
}
