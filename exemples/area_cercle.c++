#include <iostream>
#include <cmath>
#include<math.h>
using namespace std;
int main (){
   const double pi=3.14;
   double x,area;
   cout << "give the radius of your cercle: ";
   cin >> x;
   area = pi * pow(x,2);
    double circonstance=2*pi*x;
   cout << "the area of your cercle is :" << area <<'\n';
   cout << circonstance ;
   return 0;

}