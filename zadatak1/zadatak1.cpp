#include <iostream>
#include <cmath>

namespace Temperature{
const double celsius_kelvin_coeff = 273.15;
}

namespace Speed{
const double miles_kilometers_coeff = 1.6093;
}

namespace Length{
const double kilometers_ly_coeff = 9.561;
const double steps_meters_coeff = 1.312;
const double centimeters_inches_coeff = 2.54;
}

namespace Weight{
const double kilograms_pounds_coeff = 2.2046;
}

namespace Fuel_economy{
const double lp100_mpg = 235.214;
}

int main(){


  std::cout<<"Welcome to Unit converter. Please enter one of the following options:"<<std::endl;
  std::cout<<"1. Temperature"<<std::endl;
  std::cout<<"2. Speed"<<std::endl;
  std::cout<<"3. Length"<<std::endl;
  std::cout<<"4. Weight"<<std::endl;
  std::cout<<"5. Fuel economy"<<std::endl;
  
  int choice_;
  std::cout<<"Your choice is: ";
  std::cin>>choice_;
  
  switch(choice_){
    int choice1_;
    case 1:
      std::cout<<"Please choose converter: "<<std::endl;
      std::cout<<"1. Celsius to Fahrenheit"<<std::endl;
      std::cout<<"2. Fahrenheit to Celsius"<<std::endl;
      std::cout<<"3. Celsius to Kelvin"<<std::endl;
      std::cout<<"4. Kelvin to Celsius"<<std::endl;
      std::cout<<"5. Fahrenheit to Kelvin"<<std::endl;
      std::cout<<"6. Kelvin to Fahrenheit"<<std::endl;
      std::cout<<"Your choice is: ";
      std::cin>>choice1_;
      switch(choice1_){
        double celsius_;
        double fahrenheit_;
        double kelvin_;
        case 1:
          std::cout<<"Celsius value: ";
          std::cin>>celsius_;
          std::cout<<"Fahrenheit value: "<<celsius_ * 9/5 + 32;
          break;
        case 2:
          std::cout<<"Fahrenheit value: ";
          std::cin>>fahrenheit_;
          std::cout<<"Celsius value: "<<(fahrenheit_ - 32) * (5/9);
          break;
        case 3:
          std::cout<<"Celsius value: ";
          std::cin>>celsius_;
          std::cout<<"Kelvin value: "<<celsius_ + Temperature::celsius_kelvin_coeff;
          break;
        case 4:
          std::cout<<"Kelvin value: ";
          std::cin>>kelvin_;
          std::cout<<"Celsius value: "<<kelvin_ - Temperature::celsius_kelvin_coeff;
          break;
        case 5:
          std::cout<<"Fahrenheit value: ";
          std::cin>>fahrenheit_;
          std::cout<<"Kelvin value: "<<((fahrenheit_ - 32) * (5/9)) + Temperature::celsius_kelvin_coeff;
          break;
        case 6:
          std::cout<<"Kelvin value: ";
          std::cin>>kelvin_;
          std::cout<<"Fahrenheit value: "<<(kelvin_ - Temperature::celsius_kelvin_coeff) * 9/5 + 32;
          break;
      }

      break;

    case 2:
      std::cout<<"Please choose converter: "<<std::endl;
      std::cout<<"1. Kilometers per hour to miles per hour"<<std::endl;
      std::cout<<"2. Miles per hour to kilometers per hour"<<std::endl;
      std::cout<<"Your choice is: ";
      std::cin>>choice1_;
      switch(choice1_){
        double value_;
    case 1:
      std::cout<<"Kilometers per hour value: ";
      std::cin>>value_;
      std::cout<<"Miles per hour value: "<<value_ / Speed::miles_kilometers_coeff;
      break;
    case 2:
      std::cout<<"Miles per hour value: ";
      std::cin>>value_;
      std::cout<<"Kilometers per hour value: "<<value_ * Speed::miles_kilometers_coeff;
      break;
    }
      break;
    case 3:
      std::cout<<"Please choose converter: "<<std::endl;
      std::cout<<"1. Kilometers to light years"<<std::endl;
      std::cout<<"2. Light years to kilometers"<<std::endl;
      std::cout<<"3. Steps to meters"<<std::endl;
      std::cout<<"4. Meters to steps"<<std::endl;
      std::cout<<"5. Inches to centimeters"<<std::endl;
      std::cout<<"6. Centimeters to inches"<<std::endl;
      std::cout<<"Your choice is: ";
      std::cin>>choice1_;
      switch(choice1_){
      long double value_;
        case 1:
        std::cout<<"Kilometers value: ";
        std::cin>>value_;
        std::cout<<"Light years value: "<<value_*Length::kilometers_ly_coeff*pow(10,12);
        break;
        case 2:
        std::cout<<"Light years value: ";
        std::cin>>value_;
        std::cout<<"Kilometers value: "<<value_/(Length::kilometers_ly_coeff*pow(10,12));
        break;
        case 3:
        std::cout<<"Steps value: ";
        std::cin>>value_;
        std::cout<<"Meters value: "<<value_*Length::steps_meters_coeff;
        break;
        case 4:
        std::cout<<"Meters value: ";
        std::cin>>value_;
        std::cout<<"Steps value: "<<value_/Length::steps_meters_coeff;
        break;
        case 5:
        std::cout<<"Inches value: ";
        std::cin>>value_;
        std::cout<<"Centimeters value: "<<value_/Length::centimeters_inches_coeff;
        break;
        case 6:
        std::cout<<"Centimeters value: ";
        std::cin>>value_;
        std::cout<<"Inches value: "<<Length::centimeters_inches_coeff*value_;
        break;
      }
      break;
    case 4:
      std::cout<<"Please choose converter: "<<std::endl;
      std::cout<<"1. Kilograms to pounds"<<std::endl;
      std::cout<<"2. Pounds to kilograms"<<std::endl;
      std::cout<<"Your choice is: ";
      std::cin>>choice1_;
      switch(choice1_){
        double value_;
        case 1:
        std::cout<<"Kilograms value: ";
        std::cin>>value_;
        std::cout<<"Pounds value: "<<value_/Weight::kilograms_pounds_coeff;
        break;
        case 2:
        std::cout<<"Pounds value: ";
        std::cin>>value_;
        std::cout<<"Kilograms value: "<<value_*Weight::kilograms_pounds_coeff;
        break;
      }
      break;
    case 5:
      std::cout<<"Please choose converter: "<<std::endl;
      std::cout<<"1. Liters per 100 kilometers to miles per galon"<<std::endl;
      std::cout<<"2. Miles per galon to liters per 100 kilometers"<<std::endl;
      std::cout<<"Your choice is: ";
      std::cin>>choice1_;
      switch(choice1_){
      double value_;
        case 1:
      std::cout<<"Liters per 100 kilometers value: ";
      std::cin>>value_;
      std::cout<<"Miles per galon value: "<<value_/Fuel_economy::lp100_mpg;
      break;
        case 2:
      std::cout<<"Miles per galon value: ";
      std::cin>>value_;
      std::cout<<"Liters per 100 kilometers value: "<<value_*Fuel_economy::lp100_mpg;
      break;
      }
      break;
  }

return 0;
}
