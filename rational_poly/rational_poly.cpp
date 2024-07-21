#include "lib_rational.hpp"
#include <vector>
#include <iostream>

Rational horner(const std::vector<Rational>& coeffs, const Rational& x) {
    Rational result = coeffs[0];
    for (size_t i = 1; i < coeffs.size(); ++i) {
        result = result * x + coeffs[i];
    }
    return result;
}

int main() {
    std::vector<Rational> coeffs = {Rational(1, 1), Rational(2, 1), Rational(3, 1)};
    Rational q1(1, 1);
    Rational q2(2, 1);

    Rational p1 = horner(coeffs, q1);
    Rational p2 = horner(coeffs, q2);

    if (p1 > p2) {
        std::cout << "P(q1) is greater than P(q2)" << std::endl;
    } else if (p1 < p2) {
        std::cout << "P(q2) is greater than P(q1)" << std::endl;
    } else {
        std::cout << "P(q1) is equal to P(q2)" << std::endl;
    }

    return 0;
}
