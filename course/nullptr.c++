#include <iostream>
int main (){
   int *p=nullptr;
   int x=123;
   p=&x;
   if(p==nullptr){
      std::cout <<"address wasn't assigned\n";
      std::cout << *p;
   }
   else{
      std::cout <<*p;
   }
}