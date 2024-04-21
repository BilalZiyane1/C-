#include <iostream>
#include <cmath>
 
using namespace std;

namespace raw 
{
   void print(double number )
   {
      cout <<"print raw:" <<number <<endl;
   }
}
namespace rounded
{
   void print(double number )
   {
      cout<<"print rounded:"<< round(number) <<endl;/*hadi fonction f cmath*/
   }
}
int main()
{
   //using namespace rounded hadi let us use function d rounded .
   /*in case of if i want to use print li f raw 
   raw::print*/
   /*!! using raw::print let us use only the function print in the raw namespase  */
   /*we can do namespace rnd =rounded (haka rnd will refer to rounded wich means functions in rounded might be used as using namespace rnd.) */
   int x;
   cout<<"what's your number?" <<endl;
   cin>> x;
   raw::/*hadi 3la hsab namespace li fiha first function*/print(x);
   rounded::print(x);
   return 0;
}