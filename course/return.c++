#include <iostream>
double  square(double lenght );
double cube(double lenght);
int main(){
   double lenght ;
   std::cout <<"enter the lenght you want :";
   std::cin >> lenght ;
   std::cout << "Area:" << square(lenght) << "cm^2\n";
   std::cout << "Volume: " << cube(lenght) << "cm^3\n";
   return 0;
}
double square(double lenght ){
   return lenght *lenght;
}
double cube(double lenght ){
   return lenght *lenght *lenght ;
}
// we can have functions wwithsame name but it must have different arguments.