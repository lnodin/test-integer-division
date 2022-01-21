#include <iostream>

int main()
{
    /* code */
    int a = 23;
    int b = -23;
    int c = 5;
    int d = -5;
    std::cout << a << "%" << c << " = " << a % c << "\n";
    std::cout << a << "%" << c << " = " << a-(a/c*c) << "\n";
    std::cout << a << "%" << d << " = " << a % d << "\n";
    std::cout << a << "%" << d << " = " << a-(a/d*d) << "\n";
    std::cout << b << "%" << c << " = " << b % c << "\n";
    std::cout << b << "%" << c << " = " << b-(b/c*c) << "\n";
    std::cout << b << "%" << d << " = " << b % d << "\n";
    std::cout << b << "%" << d << " = " << b-(b/d*d) << "\n";
    return 0;
}
