#pragma once
#include <iostream>

namespace mathlib {
  template<typename T>
  class Fraction;

  template<typename T>
  void setEqualDenominator(Fraction<T>& frac1, Fraction<T>& frac2) {
    T tempDenominator = frac1.denominator;

    frac1.denominator *= frac2.denominator;
    frac1.numerator *= frac2.denominator;

    frac2.denominator *= tempDenominator;
    frac2.numerator *= tempDenominator;
  }

  template<typename T>
  double toDouble(const Fraction<T>& frac) {
    return static_cast<double>(frac.numerator) / frac.denominator;
  }
  
  template<typename T>
  Fraction<T> simplify(Fraction<T> frac) {
    int sign = (float)frac.numerator / frac.denominator < 0 ? -1 : 1;
    frac.numerator = std::abs(frac.numerator);
    frac.denominator = std::abs(frac.denominator);
    int gcf = std::min<T>(frac.numerator, frac.denominator);
    while (gcf > 1) {
      if (frac.numerator % gcf == 0 && frac.denominator % gcf == 0) {
        frac.numerator *= sign;
        return Fraction<T>(frac.numerator / gcf, frac.denominator / gcf);
      }

      gcf--;
    }

    frac.numerator *= sign;
    return frac;
  }

  template<typename T>
  class Fraction {
  private:
    T numerator, denominator;
  public:
    Fraction(): numerator(1), denominator(1) {}

    Fraction(T n, T d): numerator(n) {
      denominator = d == 0 ? 1 : d;
    }

    void operator+=(Fraction<T> frac) {
      if (denominator == frac.denominator) {
        numerator += frac.numerator;
        return;
      }

      setEqualDenominator(*this, frac);

      this->numerator += frac.numerator;
    }

    void operator-=(Fraction<T> frac) {
      if (denominator == frac.denominator) {
        numerator -= frac.numerator;
        return;
      }

      setEqualDenominator(*this, frac);

      this->numerator -= frac.numerator;
    }

    void operator*=(Fraction<T> frac) {
      this->numerator *= frac.numerator;
      this->denominator *= frac.denominator;
    }

    void operator/=(Fraction<T> frac) {
      this->numerator *= frac.denominator;
      this->denominator *= frac.numerator;
    }

    bool operator==(const Fraction<T> frac) {
      bool numerators_equal = numerator == frac.numerator;
      bool denominators_equal = denominator == frac.denominator;
      return numerators_equal && denominators_equal;
    }

    bool operator!=(const Fraction<T> frac) {
      bool numerators_equal = numerator == frac.numerator;
      bool denominators_equal = denominator == frac.denominator;
      return !(numerators_equal && denominators_equal);
    }

    bool operator>(const Fraction<T> frac) {
      double first = (double)numerator / denominator;
      double second = (double)frac.numerator / frac.denominator;
      return first > second;
    }
    
    bool operator<(const Fraction<T> frac) {
      double first = (double)numerator / denominator;
      double second = (double)frac.numerator / frac.denominator;
      return first < second;
    }
    
    bool operator>=(const Fraction<T> frac) {
      double first = (double)numerator / denominator;
      double second = (double)frac.numerator / frac.denominator;
      return first >= second;
    }
    
    bool operator<=(const Fraction<T> frac) {
      double first = (double)numerator / denominator;
      double second = (double)frac.numerator / frac.denominator;
      return first <= second;
    }

    friend Fraction<T> operator+(Fraction<T> fraction1, Fraction<T> fraction2) {
      if (fraction1.denominator != fraction2.denominator)
        mathlib::setEqualDenominator(fraction1, fraction2);

      return Fraction<T>(fraction1.numerator + fraction2.numerator, fraction1.denominator);
    }
    
    friend Fraction<T> operator-(Fraction<T> fraction1, Fraction<T> fraction2) {
      if (fraction1.denominator != fraction2.denominator)
        mathlib::setEqualDenominator(fraction1, fraction2);

      return Fraction<T>(fraction1.numerator - fraction2.numerator, fraction1.denominator);
    }
    
    friend Fraction<T> operator*(Fraction<T> fraction1, Fraction<T> fraction2) {
      return Fraction<T>(fraction1.numerator * fraction2.numerator, fraction1.denominator * fraction2.denominator);
    }
    
    friend Fraction<T> operator/(Fraction<T> fraction1, Fraction<T> fraction2) {
      return Fraction<T>(fraction1.numerator * fraction2.denominator, fraction1.denominator * fraction2.numerator);
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction<T>& fraction) {
      return os << fraction.numerator << " / " << fraction.denominator;
    }

    friend void operator>>(std::istream& is, Fraction<T>& fraction) {
      is >> fraction.numerator;
      is >> fraction.denominator;
      fraction.denominator = fraction.denominator == 0 ? 1 : fraction.denominator;
    }

    friend void mathlib::setEqualDenominator(Fraction<T>& frac1, Fraction<T>& frac2);
    friend double mathlib::toDouble(const Fraction<T>& frac);
    friend Fraction<T> mathlib::simplify(Fraction<T> frac);
  };
}
