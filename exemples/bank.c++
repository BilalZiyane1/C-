#include <iostream>
void showbalance(double balance );
double deposit();
double withdraw(double balance );
int main (){
   double balance =123;
   int choice;
   do
   {
   std::cout << "********************\n";
   std::cout << "ENTER YOUR CHIOICE:\n";
   std::cout << "********************\n";
   std::cout <<"1. show balance \n" <<"2. deposite money\n"<<"3. withdraw money\n" <<"4. exit\n";
   std::cin >> choice;
   switch (choice)
   {
      case 1: showbalance(balance);
      break;
      case 2: balance+= deposit();
      break;
      case 3:withdraw(balance);
      break;
      case 4: std::cout << "thank you for using ouur servises \n";
      break;
      default: std::cout<<"the number you entered doesn't refer any number \n";
      break;
   }
   } while (choice!=4);
   
   return 0;
}
void showbalance(double balance){
   std::cout << "your balance is :$" << balance << ".00\n";
}
double deposit (){
   double amount;
   do {
      std::cout <<"how much money you want to deposit ";
      std::cin >> amount ;
      } while (amount <= 0);
      
   return amount ;
}
double withdraw(double balance ){
   double amount ;
   do{
      std::cout <<"how much you want to withdraw \n";
      std::cin>> amount;
   } while (amount>balance);
   return amount;
}
