#include <iostream>

class human{
    public:

       std::string name;
       std::string occupation;
       int age;

       void eat(){
         std::cout <<"this person is eating\n";
       }
       void drink(){
         std::cout <<"this person is drinking\n";
       }
       void sleep(){
         std::cout <<"this person is sleeping\n";
       }
};
int main(){

   human human1;
   human human2;

   human1.name ="Rick";
   human1.occupation="scientist";
   human1.age=60;
   human2.name ="Ahmed";
   human2.occupation="student";
   human2.age=19;

   std::cout <<human1.name <<'\n';
   std::cout <<human1.occupation <<'\n';
   std::cout <<human1.age <<'\n';
   std::cout <<human2.name <<'\n';
   std::cout <<human2.occupation <<'\n';
   std::cout <<human2.age <<'\n';

   human1.eat();
   human1.drink();
   human1.sleep();
   human2.eat();
   human2.drink();
   human2.sleep();

   return 0;
}
