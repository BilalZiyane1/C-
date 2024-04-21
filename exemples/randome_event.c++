#include <iostream>
#include <ctime>
int main (){
   srand(time(0));
   int random=rand()%5 +1;
   std::cout <<random <<'\n';
   switch (random)
   {
   case 1:
       std::cout << "hello sir\n";
      break;
   case 2:
        std::cout<<"good morning \n";
      break;
   case 3:
        std::cout <<"good evening \n";
      break;
   case 4:
        std::cout<<"good night \n";
      break;
   case 5:
        std::cout<< "perish in the hell\n "; 
   default:
        std::cout <<"never gonna be used \n";
      break;
   }
   return 0;
}