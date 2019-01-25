/*
15) Напишите программу, находящую для заданной последовательности длины N целых чисел необходимо: минимальное произведение двух её элементов, номера 
которых различаются не менее чем на 5. Программа должна быть эффективной по 
времени и памяти
*/
#include <iostream>
using namespace std;

void swag(int* A, int n, int c){
  for (int i = 1; i < n; i++){
    A[i-1] = A[i];
  }
  A[n-1] = c;
}
int main() {
  int A[5];
  for(int i = 0; i < 5; i++){
    cin >> A[i];
  }
  int ans = A[0]*A[4], c, n;
  cin >> n;
  for(int i = 0; i < n-5; i++){
    cin >> c;
    if(i - 1 < i){
      if(A[i-1]*c < ans){
        ans = A[i-1]*c;
      }
    }else{
      if(A[i]*c < ans){
        ans = A[i]*c;
      }
    }
    swag(A, 5, c);
  }
  cout << ans;
}