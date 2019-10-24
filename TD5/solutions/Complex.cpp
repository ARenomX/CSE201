#include <iostream>
#include <cmath>

#include "Complex.hpp"

Complex Complex::max;

Complex::Complex()
{
  real = 0;
  imaginary = 0;
}

Complex::Complex(double re, double im)
{
  real = re;
  imaginary = im;

  setMax();
}

Complex::Complex(const Complex &other)
{
  real = other.real;
  imaginary = other.imaginary;

  setMax();
}

double Complex::getReal() const
{
  return real;
}

double Complex::getImaginary() const
{
  return imaginary;
}

void Complex::setReal(double re)
{
  real = re;
  setMax();
}

void Complex::setImaginary(double im)
{
  imaginary = im;
  setMax();
}

double Complex::magnitude() const
{
  return std::sqrt(real * real + imaginary * imaginary);
}

void Complex::normalize()
{
  double mag = magnitude();
  if (mag == 0) return;
  real /= mag;
  imaginary /= mag;

  setMax();
}

Complex Complex::operator-()
{
  return Complex(-real, -imaginary);
}

Complex Complex::operator+(const Complex &other)
{
  return Complex(real + other.real,
                 imaginary + other.imaginary);
}

void Complex::setMax() {
  if (max.magnitude() < magnitude()) {
    max.real = real;
    max.imaginary = imaginary;
  }
}

Complex Complex::operator-(const Complex& other)
{
  return Complex(real - other.real,
                 imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex &other)
{
  return Complex(real * other.real - imaginary * other.imaginary,
                 real * other.imaginary + imaginary * other.real);
}

bool Complex::operator==(const Complex &other) const
{
  return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex &other) const
{
  return real != other.real || imaginary != other.imaginary;
}

void Complex::printMaxComplex() {
  std::cout << "Complex with max magnitude is: ("
            << max.getReal() << ","
            << max.getImaginary() << ")" << std::endl;
}

Complex Complex::fromMax() {
  return max;
}

