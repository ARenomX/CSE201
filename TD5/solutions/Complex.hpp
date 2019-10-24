#pragma once

#include <iostream>

class Complex {
private:
  double real, imaginary;

  static Complex max;

  void setMax();

public:
  // complex 0
  Complex();

  // initialize complex from given real and imaginary parts
  Complex(double re, double im);

  // initialize complex from a different complex
  Complex(const Complex &other);

  // get the components
  double getReal() const;
  double getImaginary() const;

  // set the components
  void setReal(double re);
  void setImaginary(double im);

  // distance from origin
  double magnitude() const;

  // set magnitude to 1 if number is non-zero
  void normalize();

  // arithmetic
  Complex operator-();
  Complex operator+(const Complex &other);
  Complex operator-(const Complex &other);
  Complex operator*(const Complex &other);

  // comparison
  bool operator==(const Complex &other) const;
  bool operator!=(const Complex &other) const;

  // static
  static void printMaxComplex();
  static Complex fromMax();
};
