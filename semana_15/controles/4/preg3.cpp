#include <iostream>

using namespace std;

// clase Fraction
class Fraction
{
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    int n, d;
public:
    Fraction(int n, int d = 1) : n(n/gcd(n, d)), d(d/gcd(n, d)) { }
    int num() const { return n; }
    int den() const { return d; }
    Fraction& operator*=(const Fraction& rhs)
    {
        int new_n = n * rhs.n/gcd(n * rhs.n, d * rhs.d);
        d = d * rhs.d/gcd(n * rhs.n, d * rhs.d);
        n = new_n;
        return *this;
    }
    // Fab
    Fraction operator*(const Fraction& o){        
        return tmp;
    }
    
    // ==
    bool operator==(const Fraction &o) {
        return n == o.n && d == o.d;
    }
    
    // !=  Maricielo  
    bool operator!=(const Fraction& lhs){
        return !(*this == lhs);
    }

    // << Maricielo
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f){
        os << f.n << '/' << f.d;
        return os;
    }
};

// main
int main()
{
    Fraction f1(3, 8), f2(1, 2), f3(10, 2);
    std::cout << (f1 == f2) << '\n';
    std::cout << (f1 != f2) << '\n';
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n'
                << f2 << " * " << f3 << " = " << f2 * f3 << '\n'
                <<  2 << " * " << f1 << " = " <<  2 * f1 << '\n';
}