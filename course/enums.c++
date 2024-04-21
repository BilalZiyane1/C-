#include <iostream>
enum day{monday=1,tuesday=2,wednsday=3,thursday=4,friday=5,saturday=6,sunday=7};
// enum= a user defined data type that consists     of paired named integer constants;
//      the switch doesnt accept string as operator enums are great alternative
int main (){
  day today=sunday;
  switch (today)
  {
  case sunday: std::cout << "it's sunday!!" << '\n';
   break;
  
  case monday: std::cout << "it's monday!!" << '\n';
   break;
  
  case tuesday: std::cout << "it's tuesday!!" << '\n';
   break;
  
  case wednsday: std::cout << "it's wednsday!!" << '\n';
   break;
  
  case thursday: std::cout << "it's thursday!!" << '\n';
   break;
  
  case friday: std::cout << "it's friday!!" << '\n';
   break;
  
  case saturday: std::cout << "it's saturday!!" << '\n';
   break;
  
  
  }
}