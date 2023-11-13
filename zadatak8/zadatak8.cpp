#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

int main(){

int broj_kuglica;
std::cout<<"Unesite broj kuglica: ";
std::cin>>broj_kuglica;

int broj_izvlacenja;
std::cout<<"Unesite broj izvlacenja: ";
std::cin>>broj_izvlacenja;

std::vector<int> v1;

for(int i = 0; i<broj_izvlacenja;){
int x = rand() % broj_kuglica;  
v1.push_back(x);
i++;
for(int j = 0; j<v1.size()-1;j++){
if (x == v1[j]){
  v1.pop_back();
  i--;
}
} 
}

std::cout<<"Izvuceni brojevi:"<<std::endl;
for(int i = 0; i<v1.size();i++)
std::cout<<v1[i]<<std::endl;
std::cout<<std::endl;

std::cout<<"Sortirani brojevi: "<<std::endl;

std::sort(v1.begin(),v1.end());

for(int i = 0; i<v1.size(); i++){
  std::cout<<v1[i]<<std::endl;
}
std::cout<<std::endl;

std::cout<<"Sortirani brojevi u opadajucem redoslijedu: "<<std::endl;
std::sort(v1.rbegin(),v1.rend());

for(int i = 0; i<v1.size();i++){
  std::cout<<v1[i]<<std::endl;
}
std::cout<<std::endl;

std::vector<int> v2,v3;

for(int i = 0; i<v1.size();i++){
if(v1[i]%2 == 0){
v2.push_back(v1[i]);
}else{
v3.push_back(v1[i]);
}
}

std::cout<<"Sve parne kuglice su na pocetku a sve neparne na kraju: "<<std::endl;

for(int i = 0; i<v2.size(); i++)
std::cout<<v2[i]<<std::endl;

for(int i=0; i<v3.size(); i++)
std::cout<<v3[i]<<std::endl;


return 0;
}
