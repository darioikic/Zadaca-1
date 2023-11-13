#include <iostream>
#include<vector>
#include <algorithm>
#include<string>

int main(){

  std::vector<std::string> v1;

  std::string ulaz;

  std::cout<<"Unesi rijec: ";
  while(std::cin>>ulaz){
  v1.push_back(ulaz);
  std::cout<<"Unesi rijec: ";
  }
  std::cout<<std::endl;

  std::sort(v1.begin(),v1.end());

  std::string max_ = " ";

  for(int i = 0; i<v1.size();i++){
    if(v1[i].size()>=max_.size())
      max_ = v1[i];
  }
  

  std::string str1(max_.size(),'+');

  std::string str2(max_.size(),' ');
  std::string str3 = "+ "+str2+" +";
  
  std::cout<<"++"<<str1<<"++"<<std::endl;
  std::cout<<str3<<std::endl;
  for(int i = 0;i<v1.size();i++){
    std::string str4(max_.size()-v1[i].size(),' ');
    std::cout<<"+ "<<v1[i]<<str4<<" +"<<std::endl;
  }
  std::cout<<str3<<std::endl;
  std::cout<<"++"<<str1<<"++"<<std::endl;





return 0;
}
