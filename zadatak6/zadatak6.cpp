#include <iostream>
#include <cmath>

int main(){

double operand1;
double operand2;
char operator_;

double rez;

std::cout<<"Unesite prvi operand: ";
std::cin>>operand1;
std::cout<<"Unesite drugi operand: ";
std::cin>>operand2;
std::cout<<"Unesite operator: ";
std::cin>>operator_;

switch(operator_){
  case '+':
    rez = operand1+operand2;
    std::cout<<"Rezultat: "<<rez<<std::endl;
    break;
  case '-':
    rez = operand1 - operand2;
    std::cout<<"Rezultat: "<<rez<<std::endl;
    break;
  case '*':
    rez = operand1 * operand2;
    std::cout<<"Rezultat: "<<rez<<std::endl;
    break;
  case '/':
    if(operand2 == 0){
      std::cout<<"Nevalidan unos!"<<std::endl;
      break;
    }else{
    rez = operand1/operand2;
    std::cout<<"Rezultat: "<<rez<<std::endl;
    break;
    }
  case '%':
    rez = (int)operand1%(int)operand2;
    std::cout<<"Rezultat: "<<rez<<std::endl;
    break;
   case '^':
         rez = pow(operand1,operand2);
         std::cout<<"Rezultat: "<<rez<<std::endl;
}


return 0;
}
