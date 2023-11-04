#include <iostream>

int main(){

  int a,b,c,n;

  std::cout<<"Unesite stranice trougla: "<<std::endl;
  std::cout<<"a = ";
  std::cin>>a;
  std::cout<<"b = ";
  std::cin>>b;
  std::cout<<"c = ";
  std::cin>>c;

  if((a*a)+(b*b) == (c*c)) std::cout<<"Trougao je pravougli."<<std::endl;
  else 
    std::cout<<"Trougao nije pravougli."<<std::endl;

  std::cout<<"Unesite cijeli broj: ";
  std::cin>>n;

  for(a=1;a<=n;a++){
  for(b=a;b<=n;b++){
  for(c=b;c<=n;c++){
  if((a*a)+(b*b)==(c*c)){
    std::cout<<"("<<a<<","<<b<<","<<c<<")"<<std::endl;
  }
  }
  }
  }

  return 0;
}
