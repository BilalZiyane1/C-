#include <iostream>
int main (){
   //fill()==> fills a range of elements with a specified value 
   // fill(begin,end ,value)
   const int size =9;
   std::string foods[size];
   fill(foods,foods+size/3,"pizza");
   fill(foods+size/3,foods+2*size/3,"hamburger");
   fill(foods+2*size/3,foods+size,"hotdog");
   for(std::string food:foods){
      std::cout <<food <<'\n';
   }
}