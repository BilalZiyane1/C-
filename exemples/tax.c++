#include <iostream>
using namespace std;
int main (){
   int sales =95000;
   int state_tax=(sales*4)/100 ,county_tax=(sales *2)/100;
   cout << "the state tax is :" << state_tax <<endl
        << "the county tax tax is :" << county_tax <<endl
        << "the full amount of taxes is :" << state_tax + county_tax ;
   return 0;
         
}