#include <iostream>
int main ()
{
   int num[16],som=0;
   int size=sizeof(num)/sizeof(num[0]);
   std::cout <<"enter your bank num\n";
   for(int i=0;i<size;i++){
      std::cin >>num[i];
   }
   for(int i=0;i<size;i+=2){
      if((num[i]*2)<=9){
         som+=num[i];
      }
      else if ((num[i]*2)>=10)
      {
         som+(num[i]%10)+((num[i]/10) %10);
      }
   }
   std::cout <<som <<'\n';
      int nuu=0;
   for (int i=1;i<size;i+=2){
      nuu+=num[i];
   }
   std::cout <<nuu+som <<'\n';
   if(total%10==0){
      std::cout <<"validate\n";
   }else std::cout <<"non validate ";

}