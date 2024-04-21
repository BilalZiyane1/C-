#include <iostream>
using namespace std ;
int main (){
   int fernhait,celisius ;
   cout<< "donner votre temperature :" <<'\n';
   cin >> fernhait;
   cout<<"la temperature en C est :" << (fernhait-32)/1.8   <<"C";
   return 0;
}