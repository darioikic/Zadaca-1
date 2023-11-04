#include <iostream>
#include <vector>

int main(){

  int broj;
  int cifra;
  std::cout<<"Unesite cijeli broj: ";
  std::cin>>broj;

  std::vector<int> v1;

  while(broj>0){
  cifra = broj%10;
  v1.push_back(cifra);
  broj=broj/10;
  }

  int min = v1.at(0);
  int max = v1.at(0);
  int sum = 0;
  int product = 1;
  std::cout<<"Dobijeni vektor: "<<std::endl;
  for(int i = 0; i<v1.size(); i++){
    sum = sum+v1.at(i);
    product = product*v1.at(i);
    if(v1.at(i)>max){
    max = v1.at(i);
    }
    if(v1.at(i)<min){
    min = v1.at(i);
    }
    std::cout<<v1.at(i)<<std::endl;
  }

  std::cout<<"Najmanja cifra: "<<min<<std::endl;
  std::cout<<"Najveca cifra: "<<max<<std::endl;
  std::cout<<"Suma cifara: "<<sum<<std::endl;
  std::cout<<"Proizvod cifara: "<<product<<std::endl;

return 0;
}
