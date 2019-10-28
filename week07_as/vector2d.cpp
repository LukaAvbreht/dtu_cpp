#include "vector2d.h"
#include <cmath>

v2d::v2d(double a, double b){
// put something here
  this->x = a;
  this->y = b;
}

v2d::v2d(const v2d & v){
  this->x = v.x;
  this->y = v.y;
}

v2d::~v2d(){
}

v2d & v2d::operator=(const v2d &v){
  this->x = v.x;
  this->y = v.y;
  return *this;
}

v2d & v2d::operator+(const v2d &v){
  this->x += v.x;
  this->y += v.y;
  return *this;
}

double v2d::operator*(const v2d &v){
  double ret = this->x*v.x + this->y*v.y;
  return ret;
}

v2d & v2d::operator*(double k){
  this->x *= k;
  this->y *= k;
  return *this;
}

double v2d::length(){
  double ret = sqrt(pow(this->x,2) + pow(this->y,2));
  return ret;
}
