#include <iostream>
struct car{
   std::string model;
   int year;
   std::string color;
};
void printcar(car car);
void paintcar(car &car,std::string color );
int main ()
{
   car car1;
   car car2;

   car1.model ="BMW";
   car1.year =2022;
   car1.color="black" ;

   car2.model = "ferrari";
   car2.year=2023;
   car2.color="red";
   
   paintcar(car1,"blue");
   paintcar(car2,"green");

   printcar(car1);
   printcar(car2);

   return 0;
}
void printcar(car car){
   std::cout << car.model << '\n';
   std::cout << car.year << '\n';
   std::cout << car.color << '\n';
}
void paintcar(car &car,std::string color ){
    car.color= color;
}