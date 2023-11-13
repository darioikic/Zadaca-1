#include<iostream>
#include<vector>

int main(){

  std::vector<std::string> v1;
  
  std::string x;
  int brojac = 0;

  std::cout<<"Unesite rijec: ";
  while(std::cin>>x)
  {
    v1.push_back(x);
    brojac = brojac + x.size();
    std::cout<<"Unesite rijec: ";
  }
  std::cout<<std::endl;

  std::string max_ = " ";

  std::string pom;

  std::cout<<"Lista rijeci: ";
    for(int i = 0; i<v1.size(); i++){
      pom = v1[i];
      if(pom.size()>=max_.size()){
        max_ = v1[i];
      }
      std::cout<<v1[i]<<" ";
    }
  std::cout<<std::endl;
  std::cout<<"Ukupan broj karaktera: "<<brojac<<std::endl;
  std::cout<<"Najduza rijec: "<<max_<<std::endl;

  std::string str1(max_.size(),'+');
  std::string linija1 = "++" + str1 + "++";
  std::string str2(max_.size(),' ');
  std::string linija2 = "+ " + str2 + " +";
  std::cout<<linija1<<std::endl;
  std::cout<<linija2<<std::endl;
  std::cout<<"+ "<<max_<<" +"<<std::endl;
  std::cout<<linija2<<std::endl;
  std::cout<<linija1<<std::endl;



  return 0;
}
