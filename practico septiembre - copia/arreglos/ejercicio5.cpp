#include <iostream>

using namespace std;

int main() {
  int M[3][2] = {
    {1, 2},
    {3, 4},
    {5, 6}
  };

  int N[3][2] = {
    {7, 8},
    {9, 10},
    {11, 12}
  };

  int P[3][2];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      P[i][j] = M[i][j] + N[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cout << P[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
