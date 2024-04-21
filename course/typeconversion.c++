#include <iostream>
int main(){
   char x=100;
   std::cout <<(int ) x <<'\n';
   std::cout <<(char) 100 << '\n';
   int correct =8;
   int total=10;
   double score= correct/(double)total *100;
   std::cout << score << "%" ;
   std::cout<<"what's your full name?" <<'\n';
   std::string name;
   //std::cin>>name ; hadi let us take only one word 
   std::getline(std::cin,name );
   std:: cout<< "hello" <<name ;
   return 0;
}