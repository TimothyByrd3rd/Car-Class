
//this implements the behaviors of the car class
#include "Car.h"

Car::Car()
{
  make = "Ford";
  model = "Mustang";
  year = 2020;
  price = 39000.00;
}
Car::Car(string ma, string mo, int ye, float pr)
{
  make = ma;
  model = mo;
  year = ye;
  price = pr;
}
string Car::getMake()
{
  return make;
}
void Car::setMake(string ma)
{
  make = ma;
}

string Car::getModel()
{
  return model;
}
void Car::setModel(string mo)
{
  model = mo;
}
int Car::getYear()
{
  return year;
}
void Car::setYear(int yr)
{
  year = yr;
}
float Car::getPrice()
{
  return price;
}
void Car::setPrice(float pr)
{
  price = pr;
}
