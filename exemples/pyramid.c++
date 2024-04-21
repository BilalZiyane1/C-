#include <iostream>
int main (){
   int x;
   std::cout <<"how many rows do you want?";
   std::cin >> x;
   for (int i=1;i <= x;i++){
      for(int j=1;j<=x-i;j++){
         std::cout <<" ";
      }
      for(int j=1;j<=2*i-1;j++){
         std::cout <<"*";
      }
      std::cout<<"\n";
   }
   return 0;
}
/*#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++) {
        //Print spaces
        for(int j = 1; j <= rows-i; j++) {
            cout << " ";
        }
        //Print *
        for(int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}*/
