// Write a program to calculate Maximum number of handshakes
#include <iostream>
using namespace std;
void handshakes(int a) {
  int k;
  k = ((a - 1) * a) / 2;
  cout << k;
}
int main() {
  int a = 10;
  handshakes(a);
}