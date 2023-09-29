#include <iostream>

using namespace std;

int main() {
  int A[] = {1, 2, 3, 4, 5};
  int B[] = {2, 3, 4, 5, 6};

  int n = sizeof(A) / sizeof(A[0]);

  int C[n];
  for (int i = 0; i < n; i++) {
    C[i] = A[i] + B[i];
  }

  for (int i = 0; i < n; i++) {
    cout << C[i] << " ";
  }

  cout << endl;
  for (int i = 0; i < n; i++) {

      cout << A[i] << " ";
    
  }

  return 0;
}