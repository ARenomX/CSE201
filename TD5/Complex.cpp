#include <iostream>
#include <cmath>

#include "Complex.hpp"

double Complex::max = -1;
double Complex::maxi[2];
Complex::Complex() {
  real = 0.0;
  imaginary = 0.0;
  if (this->magnitude() > max){
    max = this->magnitude();
    maxi[1] = real;
    maxi[2] = imaginary;
  }
}

Complex::Complex(double real, double imaginary) {
  this->real = real;
  this->imaginary = imaginary;
  if (this->magnitude() > max){
    max = this->magnitude();
    maxi[1] = real;
    maxi[2] = imaginary;
  }
}

void Complex::printMaxComplex(){
  std::cout<< max << std::endl;
}

double Complex::getReal() {
  return real;
}

double Complex::getImaginary() {
  return imaginary;
}

void Complex::setReal(double re) {
  real = re;
  if (this->magnitude() > max){
    max = this->magnitude();
    maxi[1] = real;
    maxi[2] = imaginary;
  }
}

void Complex::setImaginary(double im) {
  imaginary = im;
  if (this->magnitude() > max){
    max = this->magnitude();
    maxi[1] = real;
    maxi[2] = imaginary;
  }
}
Complex Complex::fromMax(){
  return Complex(maxi[1],maxi[2]);
}
double Complex::magnitude() {
  return std::sqrt(std::pow(real, 2) + pow(imaginary, 2));
}

void Complex::normalize() {
  double magnitude_val = magnitude();

  if (magnitude_val != 0) {
    real = real / magnitude_val;
    imaginary = imaginary / magnitude_val;
  }
}

Complex::~Complex() {
  std::cout << "Destroying number " << real << " + " << imaginary << " * i" << std::endl;
}

int main() {
  Complex c1;
  Complex c2 = Complex(3,4);
  Complex c3 = Complex(2,3);

  Complex::printMaxComplex();

  c3.setReal(5);
  Complex::printMaxComplex();

  Complex c4 = Complex::fromMax();
  c4.setImaginary(c4.getImaginary() + 1);
  c4.setImaginary(0);

  Complex::printMaxComplex();
}