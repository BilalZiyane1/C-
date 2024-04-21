#include <iostream>
template <typename T,typename U> //this make it possible to use the fonction with any data type
 auto max(T x,U y){
   return (x>y) ? x :y;
}
int main ()
{
   std::cout << max(1.4,4.4) <<'\n';
   return 0;
}
//using typename T in the two spots that make it possible only to enter 2 values from same kind
// using the typename U make it possible to enter two arguments from diferent datatypes 
//the auto may be replaced by a T or U but in order to make the choosing automatic we use auto