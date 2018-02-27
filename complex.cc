/*Kyle Potak
Copyright 2018
written on 2/8/18
Homework 02 for CSCE240 spring 2018
complex.cc
*/


#include "/acct/kpotak/Documents/240/kpotak/hw/02/complex.h"
#include <complex>
#include <cmath>
using std::string;
typedef std::string String;

// Constructors
Complex::Complex() {
  real_ = 0.0;
  imag_ = 0.0;
}

Complex::Complex(double new_imag) {
  real_ = 0.0;
  imag_ = new_imag;
}

Complex::Complex(double new_real, double new_imag) {
  real_ = new_real;
  imag_ = new_imag;
}

// overload real and imag


// Addition
Complex Complex::Add(const Complex& other_complex) const {
  Complex new_complex;
  new_complex.real(real_ + other_complex.real());
  new_complex.imag(imag_ + other_complex.imag());

return new_complex;
}
Complex Complex::Add(double real_add) {}
Complex Complex::Add(int real_add) {}

// Multiplication
Complex Complex::Mul(const Complex& other_complex) {
// (x + yi) * (u + vi) = (xu - yv) + (xv + uy)*i
  double x = this.real_;
  double y = this.imag_;
  double u = Complex.getReal_;
  double v = Complex.getImag_;

// (xu - yv) + (xv + uy)i
  Complex new_complex;
  new_complex.real((x*u) - (y*v));
  new_complex.imag((x*v) + (u*y));
  return new_complex;
}

// ToString
String Complex::to_string() {
  String result = "";
  String real_string;
  String imag_string;
if (real == 0) {
  real_string = "";
} else {
  real_string = to_string(real);
if (imag ==0) {
  imag_string = "";
} else if (imag ==1) {
  imag_string = "i";
} else  {
  imag_string = to_string(imag) + "i";
} else if (imag < 0) {
  result = real_string + imag_string;
  return_string = to_string(this->real_) + " + " + to_string(this->imag_) + "i";

  return return_string;
}

// ToComplex
static Complex ToComplex(String complex_string) {
  Complex return_complex;
  String real_string;
  String imag_string;

}
// overloading real operator
double Complex real(Complex real) {
Complex 
}
// 2.7 + 3i
for (iter = 0; complex_string.at(iter) != '+' ; ++iter) {
  real_string += complex_string.at(iter);
}
}

Complex operator+(const Complex & lhs_complex, const Complex & rhs_complex) {
  return lhs_complex.Add(rhs_complex);
}
Complex operator+(const  Complex & lhs_complex, int rhs) {
  return lhs_complex.Add(rhs);
}
Complex operator+(const  Complex & lhs_complex, double rhs) {
  return lhs_complex.Add(rhs);
}
Complex operator*(const Complex & lhs_complex, const Complex & rhs_complex) {
  return lhs_complex.Mul(rhs_complex);
}
Complex operator*(const Complex & lhs_complex, int rhs) {
  return lhs_complex.Mul(rhs);
}
Complex operator*(const Complex & lhs_complex, double rhs) {
  return lhs_complex.Mul(rhs);
}

ostream& operator<<(ostream& output, Complex& rhs) {
  output << rhs.ToString();
  return output;
}




/*

complex::complex(double r=0.0f,double im=0.0f) {
real = r;
imag = im;
}

complex::complex(complex &c) {
this->real = c.real;
this->imag = c.imag;
}

void complex::operator =(complex c) {
real = c.real;
imag = c.imag;
}

complex complex::operator +(complex c) {
complex tmp;
tmp.real = this->real+c.real;
tmp.imag = this->imag+c.imag;
return tmp;
}

complex complex::operator *(complex c ) {
complex tmp;
tmp.real = (real*c.real) - (imag*c.imag);
tmp.imag = (real*c.imag) - (imag*c.real);
return tmp;
}
*/
