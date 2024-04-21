#include <iostream>
#include <ctime>
int main (){
   int num;
   int guess;
   int tries=0;
   srand(time(0));
   num=(rand()%100)+1;
   std::cout << "********GUESSING GAME*********\n";
   do
   {
      std::cout <<"enter your guess\n";
      std::cin>> guess;
      tries++;

      
   } while (guess!=num && tries <3);
   std::cout << "the number was " << num ;
   
}