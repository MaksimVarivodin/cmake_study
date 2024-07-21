#ifndef LIB_RATIONAL_H
#define LIB_RATIONAL_H

class Rational {
public:
    Rational(int numerator = 0, int denominator = 1);
    void reduce();
    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    bool operator<(const Rational& other) const;
    bool operator<=(const Rational& other) const;
    bool operator>(const Rational& other) const;
    bool operator>=(const Rational& other) const;

private:
    int numerator;
    int denominator;
    int gcd(int a, int b) const;
};

#endif // LIB_RATIONAL_H
