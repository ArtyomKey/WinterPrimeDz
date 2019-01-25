#include <iostream>
using namespace std;
int main() {
  int x, y;
  cin >> x >> y;
  /*
  int z;
  cin >> z;
  A[z] = 0; (если не нужно число Z)
  */
  int A[y];
  A[x-1] = 1;
  for(int i = 0; i < x-1; i++){
    A[i] = 0;
  }
  /*for(int i = x; i <= z-1; i++){
    if(i % 2 == 0){ 
      if(i % 3 == 0){
        A[i] = A[i-1] + A[i/3] + A[i/2];
      }else{
        A[i] = A[i-1] + A[i/2];
      }
    }else{
      if(i % 3 == 0){
        A[i] = A[i-1] + A[i/3];
      }else{
        A[i] = A[i-1];
      }
    }
  } */
  for(int i = x/*тут заменить на z-1 для задачи 6*/; i <= y-1; i++){
    if(i % 2 == 0){ 
      if(i % 3 == 0){
        A[i] = A[i-1] + A[i/3] + A[i/2]; /*тут можно менять команды*/
      }else{
        A[i] = A[i-1] + A[i/2];
      }
    }else{
      if(i % 3 == 0){
        A[i] = A[i-1] + A[i/3];
      }else{
        A[i] = A[i-1];
      }
    }
  }
  /*if(A[y-1]){
    cout << "YES";
    }else{
      cout >> "NO"*/
  cout << A[y-1];
}