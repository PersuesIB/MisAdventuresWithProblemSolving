#include <iostream>

int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    long a, b, p;
    std::cin >> a >> b >> p;
    if (a * b != p)
      std::cout << "16 BIT S/W ONLY";
    else
      std::cout << "POSSIBLE DOUBLE SIGMA";
  }
  return 0;
}
