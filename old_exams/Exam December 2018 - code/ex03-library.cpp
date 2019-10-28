#include <iostream>
#include "ex03-library.h"

//Do not modify
TemperatureScalesConverter::TemperatureScalesConverter() {
  //By default we add a measurement of 0 C which corresponds to 32 F.
  CTemperatures.push_back(0);
  FTemperatures.push_back(32);
}

//Exercise 3 (a) Check and correct this method
void TemperatureScalesConverter::print() {
  cout << this->CTemperatures.size() << " Celsius measurements:";
  for (int i = 0; i < this->CTemperatures.size(); i++) {
    cout << ' ' << this->CTemperatures[i];
  }
  cout << endl;

  cout << this->FTemperatures.size() << " Fahrenheit measurements:";
  for (int i = 0; i < this->FTemperatures.size(); i++) {
    cout << ' ' << this->FTemperatures[i];
  }
  cout << endl;
}

//Exercise 3 (b) Implement this method
double TemperatureScalesConverter::convertToF(double CTemperature) {
  //put your code here
  return 1.8 * CTemperature + 32;
}

//Exercise 3 (c) Implement this method
double TemperatureScalesConverter::convertToC(double FTemperature) {
  //put your code here
  return 0.56* (FTemperature - 32);
}

//Exercise 3 (d) Implement this method
bool TemperatureScalesConverter::addMeasurement(string scale, double temperature) {
  //put your code here
  if (scale == "C") {
    this->CTemperatures.push_back(temperature);
    this->FTemperatures.push_back(1.8*temperature+32);
    return true;
  } else if (scale == "F") {
    this->CTemperatures.push_back((temperature-32)*0.56);
    this->FTemperatures.push_back(temperature);
    return true;
  } else {
    return false;
  }
}