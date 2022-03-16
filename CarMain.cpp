/*
This has the main method.

This is where we create the Objects
AND use them.
*/

//I changed the code a bit to also print out the price on the default car

#include "Car.h"

int main()
{
  string make;
  string model;
  int year;
  float price;

  //using a pointer *myCar
  Car *myCar = new Car(); //new Car Object
  cout << myCar->getMake()<< " "<< myCar->getModel()<< " "<< myCar->getYear()<< " "<< "$" << myCar->getPrice()<<endl;//Using the Car Object by calling a method on the Object
  Car *hisCar = new Car("Toyota", "Camry", 2019, 500);
  cout<<hisCar->getMake()<<endl;
  Car *samCar = new Car("Nissan", "Maxima", 2005, 90);
  cout<<samCar->getMake()<<endl;
  
  //creating a car object with user info
  cout<< "Enter the make of the car:";
  cin>> make;
  cout<< "Enter the model of the car:";
  cin>> model;
  cout<< "Enter the year of the car:";
  cin>> year;
  cout<< "Enter the price of the car:";
  cin>> price;

  Car *clownCar = new Car(make, model, year, price);
  //Prints out the make of the car
  cout<<"The user's car make is: "<<clownCar->getMake() << endl << "The user's car model is: "<<clownCar->getModel()  << endl << "The user's car year is: "<<clownCar->getYear()  << endl << "The user's car price is: $"<<clownCar->getPrice() <<  endl;
}