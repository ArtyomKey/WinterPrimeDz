#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int A[n];
  for(int i = 0; i < n; i++){
    cin >> A[i];
  }
  int ans = A[0]+A[5];
  for(int i = 0; i < n; i++){
    for(int j = i + 5; j < n; j++){
      if(ans > A[i]+A[j]){
        ans = A[i]+A[j];
      }
    }
  }
  cout << ans;
}