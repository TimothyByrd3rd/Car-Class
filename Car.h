/*
Timothy Byrd
Fall 2019
CM210

This is the plan or blueprint or idea of
  a Car object(s)
Also called a 'class'
*/
#include<iostream>
#include<string>

using namespace std;
//creating the class Car
class Car{
  //Class Attributes
  private:
    string make;
    string model;
    int year;
    float price;
  //Class Behaviors
  public:
    Car(); // constructor
    Car(string mk, string md, int yr, float pr); //another constructor
    string getMake(); // to retrive the information about the make
    void setMake(string m); // to set the value of the make of the car
    string getModel();
    void setModel(string mo);
    int getYear();
    void setYear(int yr);
    float getPrice();
    void setPrice(float pr);

}; //end of class definition