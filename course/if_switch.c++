#include <iostream>
int main(){
   int age ;
   /*std::cout << "how old are you" <<std::endl;
   std::cin>> age;
   if(age>=18){
      std::cout << "welcome sir";   
   }else std::cout <<"not old enough";*/
   int  mounth;
   std::cout<< "give the number " <<std::endl;
   std::cin>> mounth;
   switch(mounth){
      case 1:
        std::cout <<"janvier " <<'\n';
      break;
      case 2:
        std:: cout <<"fevrier" <<'\n';
      break;
      default:
       break;
   }
   return 0;
}