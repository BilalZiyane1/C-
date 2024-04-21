#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string,int >> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;//like typedef
using number_t = int ;
int main(){
  /* pairlist_t /*std::vector<std::pair<std::string,int >> instead of writing all this shit we write its typedef which is im this case pairlist_t bilal*/
  //instead of writing std::string we use text_t
  text_t ch;
  number_t age ;
  std::cout <<"enter the name you want and the age  " <<std::endl;
  std::cin>> ch   >>age ;
  std::cout <<"hello " <<ch <<" " <<age  ;
  return 0;
}