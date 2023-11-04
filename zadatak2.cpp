#include <bitset>
#include <iostream>

// Poziv funkcije printBits rezultovace sa ispisom
// proslijedjenog broja u binarnoj formi.
//
// Primjer:
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// unsigned short s = 5;
// printBits(s);
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Ispis:
// 0000000000000101
// 
void printBits(unsigned short &reg){
  std::bitset<16> bits(reg);
  std::cout << bits << std::endl;
  reg = bits.to_ulong();
}

void setBits(int position, unsigned short &reg){
  std::bitset<16> bits(reg);
  bits.set(position, 1);
  std::cout<<bits<<std::endl;
  reg = bits.to_ulong();
}

void resetBits(int position, unsigned short &reg){
  std::bitset<16> bits(reg);
  bits.reset(position);
  std::cout<<bits<<std::endl;
  reg = bits.to_ulong();
}


int main() {
  std::cout << "1. Print register" << std::endl;
  std::cout << "2. Set bit in register" << std::endl;
  std::cout << "3. Reset bit in register" << std::endl;
  std::cout << "4. Exit" << std::endl;
  std::cout << "Enter option: ";
  
  int option;
  std::cin >> option;
  unsigned short register_ = 0; 
  while(true) {

    if (option == 1) {
      printBits(register_);
      std::cout<<"Enter option: ";
      std::cin>>option;

    } else if (option == 2) {
      int reg_bit;
      std::cout<<"Insert position: ";
      std::cin>>reg_bit;
      setBits(reg_bit,register_);
      std::cout<<"Enter option: ";
      std::cin>>option;

    } else if (option == 3) {
      int reg_bit;
      std::cout<<"Insert position: ";
      std::cin>>reg_bit;
      resetBits(reg_bit,register_);
      std::cout<<"Enter option: ";
      std::cin>>option;

    } else if (option == 4) {
      break;
    }
    std::cout << std::endl;
  }

  return 0;
}
