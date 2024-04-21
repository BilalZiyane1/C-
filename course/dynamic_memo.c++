#include <iostream>
int main (){
   int size;
   char *pgrades=NULL;
   std::cout <<"how many grades to enter in?";
   std::cin >> size;
   pgrades = new char[size];
   for (int i=0;i< size; i++){
      std::cout << "enter grade number #"<<i+1 <<':' <<'\n';
      std::cin >> pgrades[i];
   }
   for (int  i = 0; i < size; i++)
   {
       std::cout << pgrades[i] <<' ';
   }
    delete[] pgrades;
   
}