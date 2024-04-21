#include <iostream>
namespace first {
   int x=0;
}
namespace sec {
   int x =1;
}
int main ()
{
   //using namespace std;hada is not suggested 
   using std::cout;//we dont need std before cout 
   using std::string ;//same 
   using std::cin;//same 
   using namespace first;
   //int x=2;f had le cas kanakhdo local value d x which is 2 
   cout<</*sec::*/x;
   string name ;
   cout<<"give your name " <<'\n';
   cin >> name ;
   cout<<"hello " <<name ;
}