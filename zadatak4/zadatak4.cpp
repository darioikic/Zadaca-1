#include <iostream>

int main(){
  std::string str1;
  std::string str2;

  std::cout<<"Unesite prvi string: ";
  std::cin>>str1;
  std::cout<<"Unesite drugi string: ";
  std::cin>>str2;

  int counter_ = 0;

  if(str1.size() == str2.size()){
  for(int i = 0;i<str1.size();i++){
  if(str1.at(i)>96 && str1.at(i)<123)
    str1.at(i) = str1.at(i) - 32;
  if(str2.at(i)>96 && str2.at(i)<123)
    str2.at(i) = str2.at(i) - 32;
   if(str1.at(i) != str2.at(i)) counter_++;
  }
  std::cout<<"Hamming-ova udaljenost izmedju dva unesena stringa: "<<counter_<<std::endl;
  }
  else
    std::cout<<"Stringovi nisu jednake duzine."<<std::endl;

return 0;
}
