#include <iostream>
int somme(int n);
int main(){
    int n;
    std::cout <<"enter your num";
    std::cin >> n;
    std::cout << somme(n);
    return 0;
}
int somme(int n){
    if(n==0){
        return n;
    }
    return n+somme(n-1);
}
