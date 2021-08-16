#pragma once

#include <c10/util/Posit16es2.h>

namespace std {

inline c10::posit16es2 acos(c10::posit16es2 a) {
  return sw::universal::acos(a);
}
inline c10::posit16es2 asin(c10::posit16es2 a) {
  return sw::universal::asin(a);
}
inline c10::posit16es2 atan(c10::posit16es2 a) {
  return sw::universal::atan(a);
}
inline c10::posit16es2 erf(c10::posit16es2 a) {
  return sw::universal::erf(a);
}
inline c10::posit16es2 erfc(c10::posit16es2 a) {
  return sw::universal::erfc(a);
}
inline c10::posit16es2 exp(c10::posit16es2 a) {
  return sw::universal::exp(a);
}
inline c10::posit16es2 expm1(c10::posit16es2 a) {
  return sw::universal::expm1(a);
}
inline c10::posit16es2 log(c10::posit16es2 a) {
  return sw::universal::log(a);
}
inline c10::posit16es2 log10(c10::posit16es2 a) {
  return sw::universal::log10(a);
}
inline c10::posit16es2 log1p(c10::posit16es2 a) {
  return sw::universal::log1p(a);
}
inline c10::posit16es2 log2(c10::posit16es2 a) {
  return sw::universal::log2(a);
}
inline c10::posit16es2 ceil(c10::posit16es2 a) {
  return sw::universal::ceil(a);
}
inline c10::posit16es2 cos(c10::posit16es2 a) {
  return sw::universal::cos(a);
}
inline c10::posit16es2 floor(c10::posit16es2 a) {
  return sw::universal::floor(a);
}
inline c10::posit16es2 nearbyint(c10::posit16es2 a) {
  return std::nearbyint(float(a));
}
inline c10::posit16es2 sin(c10::posit16es2 a) {
  return sw::universal::sin(a);
}
inline c10::posit16es2 tan(c10::posit16es2 a) {
  return sw::universal::tan(a);
}
inline c10::posit16es2 tanh(c10::posit16es2 a) {
  return sw::universal::tanh(a);
}
inline c10::posit16es2 trunc(c10::posit16es2 a) {
  return sw::universal::trunc(a);
}
inline c10::posit16es2 lgamma(c10::posit16es2 a) {
  return std::lgamma(float(a));
}
inline c10::posit16es2 sqrt(c10::posit16es2 a) {
  return sw::universal::sqrt(a);
}
inline c10::posit16es2 rsqrt(c10::posit16es2 a) {
  return sw::universal::rsqrt(a);
}
inline c10::posit16es2 abs(c10::posit16es2 a) {
  return sw::universal::abs(a);
}
#if defined(_MSC_VER) && defined(__CUDACC__)
inline c10::posit16es2 pow(c10::posit16es2 a, double b) {
  return sw::universal::pow(a, b);
}
#else
inline c10::posit16es2 pow(c10::posit16es2 a, double b) {
  return sw::universal::pow(a, b);
}
#endif
inline c10::posit16es2 pow(c10::posit16es2 a, c10::posit16es2 b) {
  return sw::universal::pow(a, b);
}
inline c10::posit16es2 fmod(c10::posit16es2 a, c10::posit16es2 b) {
  return sw::universal::fmod(a, b);
}

inline c10::posit16es2 nextafter(c10::posit16es2 a, c10::posit16es2 b) {
  return sw::universal::nextafter(a, b);
}

} // namespace std
