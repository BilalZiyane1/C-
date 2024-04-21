/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
   long elapsed_sec = time(0); //jan 1 1970 nullprd instead of 0
   srand(elapsed_sec);
   int number= rand() % 10; // kandiro max ;
   cout<<number;
   return 0;

}*/
#include <iostream>
int main (){
   srand(time(0));
   int num1=(rand()%6)+1;
   int num3=(rand()%6)+1;
   int num2=(rand()%6)+1;
   std::cout << num1 <<'\n';
   std::cout << num2 <<'\n';
   std::cout << num3 <<'\n';
   return 0;
}