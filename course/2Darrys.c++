#include <iostream>
int main ()
{
   std::string cars[][3]={{"hvlargbc","kgbvou","lzgbcoa"},
                    {"fcnh9au","lcungxq","agvac8oc"},
                    {"uzgabcon","zzcvcuvh","cg8qoxhn"}};
   int rows =sizeof(cars)/sizeof(cars[0]);
   std::cout <<rows <<'\n';
   int colunns = sizeof(cars[0])/sizeof(cars[0][0]);
   for (int i=0;i<rows;i++){
      for (int j=0;j<colunns;j++){
         std::cout <<cars[i][j] <<" ";
      }
      std::cout <<'\n';
   }
}