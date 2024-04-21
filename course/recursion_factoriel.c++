#include <iostream>
int factoriel(int n);
int main ()
{
   int fact=1,n,b;
   std::cout <<"enter your number :";
   std::cin >> n;
  /* b=n;
   while (n>=1)
   {
      fact*=n;
      n--;
   }
   std::cout <<"the factoriel of " << b <<" is: " << fact;*/  
    b=factoriel(n);
    std::cout << "the factoriel of the numbers is:" << b <<'\n';
   

}
int factoriel(int n){
   if(n==1) return 1;
   return n*factoriel(n-1);
}
