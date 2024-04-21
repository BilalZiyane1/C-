#include<iostream>
#include <cmath>
int main(){
   using std::cout;
   using std::cin;
    char x;
   int num1,num2;
   cout<< "donner l'operation que vous desirez:";
   cin>> x;
   cout<< "entrez vos deux nombres:" <<'\n';
   cin >> num1 >> num2;
   switch(x){
      case '+':
         cout<<" the addition of the two numbers is: "<<num1+num2;
      break;
      case '-':
         cout<< "the substraction of the two numbers is: "<<num1-num2;
      break;
      case 'x':
         cout<< "the multiplication of the two numbers is :"<<num1*num2;
      break;
      case '/':
         cout << "the devision of the two numbers is :" <<num1/num2;
      break;
      default:
        cout << "please enter a valable operation" <<'n';
      break;
   }
}
