#include <iostream>
int main (){
   for(int i=0;i<20;i++){
      if(i==13){
         continue ;
      }
      std::cout<<i << std::endl;
   }
   std::cout << "your job is done \n";


}//break let us break out of a loop
//continue let us skip an itteration 