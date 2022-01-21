#include <iostream>

int modulo_Euclidean(int a, int b) {
  int m = a % b;
  if (m < 0) {
    // m += (b < 0) ? -b : b; // avoid this form: it is UB when b == INT_MIN
    m = (b < 0) ? m - b : m + b;
  }
  return m;
}


int main()
{
    /* code */
    int a = 23;
    int b = -23;
    int c = 5;
    int d = -5;
    std::cout << a << "%" << c << " = " << a % c << "\n"; // 3
    std::cout << a << "%" << c << " = " << a-(a/c*c) << "\n"; // 3
    std::cout << a << "%" << c << " = " << modulo_Euclidean(a, c) << "\n"; // 3
    std::cout << "\n";
    std::cout << a << "%" << d << " = " << a % d << "\n"; // 3
    std::cout << a << "%" << d << " = " << a-(a/d*d) << "\n"; // 3
    std::cout << a << "%" << d << " = " << modulo_Euclidean(a, d) << "\n"; // 3
    std::cout << "\n";
    std::cout << b << "%" << c << " = " << b % c << "\n"; // -3
    std::cout << b << "%" << c << " = " << b-(b/c*c) << "\n"; // -3
    std::cout << b << "%" << c << " = " << modulo_Euclidean(b, c) << "\n"; // -3
    std::cout << "\n";
    std::cout << b << "%" << d << " = " << b % d << "\n"; // -3
    std::cout << b << "%" << d << " = " << b-(b/d*d) << "\n"; // -3
    std::cout << b << "%" << d << " = " << modulo_Euclidean(b, d) << "\n"; // -3
    return 0;
}
