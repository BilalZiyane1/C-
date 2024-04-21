#include <iostream>
int num =3;
void printnum();
int main ()
{
   int num =1;
   printnum();
   std::cout << /*:: when we add :: before a variable it let us use the globale one instead of the local version */num << '\n';
   return 0;
}
void printnum(){
   int num =2;
   std::cout << num <<'\n';
}