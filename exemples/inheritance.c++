#include <iostream>
 
class animal{
   public:
      bool alive =true;
   void eat(){
      std::cout <<"ths animal is eating\n";
   }
};
class dog : public animal{
   public:
   void bark(){
     std::cout <<
};
int main (){
   dog dog;
   std::cout <<dog.alive <<'\n';
   dog.eat();
   return 0;
}