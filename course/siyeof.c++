#include <iostream>
int main (){
   double gpa =2.5;
   std::string name ="bilal is the best human alive";
   std::cout << sizeof(name )<<" bytes\n";
   std::cout << sizeof(gpa) << " bytes\n"; 
   char grades []={'A','b','c','d','e','f'};
   std::string students[]={"ahmed","amine","bilal","med"};
   std::cout<<sizeof(students)/sizeof(std::string ) <<" elements\n";
   return 0; 
}